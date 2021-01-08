//   Copyright 2020 Roddie Kieley
//
//   Licensed under the Apache License, Version 2.0 (the "License");
//   you may not use this file except in compliance with the License.
//   You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the License is distributed on an "AS IS" BASIS,
//   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//   See the License for the specific language governing permissions and
//   limitations under the License.

#include "Configuration.h"
#include "Server.h"
#include "../Network/MessageDispatcher.h"
#include "../Network/MessageConsumer.h"
#include "../Commands/SecurityCommand.h"
#include "../Commands/JoinSecurityCommand.h"
#include "../Commands/LeaveSecurityCommand.h"
#include "../Network/SimpleAsyncProducer.h"
#include "../Network/SimpleAsyncConsumer.h"
#include "../Events/EventDispatcher.h"
#include "../Commands/CommandConsumer.h"
#include "../Commands/CommandQueue.h"
#include "../Game/PodFactory.h"
#include "../Game/BulletFactory.h"
#include "../Events/EntityGameEventFactory.h"
#include "../Events/SecurityGameEventFactory.h"
#include "../Proto/CommandBuffer.pb.h"
#include "../Proto/SecurityCommandBuffer.pb.h"
#include "../Proto/RawInputCommandBuffer.pb.h"
#include "../Commands/SecurityCommandBufferFactory.h"
#include "../Shared/FactoryT.h"
#include "activemq/library/ActiveMQCPP.h"
#include <iostream>
#include "../Logging/loguru.cpp"



void usage(char **argv) {
    fprintf(stderr, "usage: %s [options]\n", argv[0]);
    fprintf(stderr, "  --help: print usage\n");
    fprintf(stderr, "  --broker-uri: broker uri with options e.g. tcp://127.0.0.1:61613?wireFormat=stomp&keepAlive=true\n");
    fprintf(stderr, " ");
    fprintf(stderr, "\n\n");
//    fprintf(stderr, "bad argument: %s\n", *arg);
//    exit(1);
}

int main(int argc, char* argv[])
{
	loguru::init(argc, argv);
	LOG_F(INFO, "Hello log file!");

    //std::string     strSecurityInURI = "AAS.IN";
    //std::string     strSecurityOutURI = "AAS.OUT";
    std::string     strBrokerURI = "tcp://127.0.0.1:61613?wireFormat=stomp&keepAlive=true";
    std::string     strCommandInDestinationURI = "COMMAND.IN";
    std::string     strGameEventOutDestinationURI = "GAME.EVENT.OUT";
    
    std::cout << "Starting..." << std::endl;
    for (int i = 1; i < argc; ++i)
    {
        if (0 == strcmp(argv[i], "--help"))
        {
            usage(argv);
            exit(0);
        }
        else if (0 == strcmp(argv[i], "--broker-uri"))
        {
            // TODO: Error checking on arg
            strBrokerURI = argv[++i];
        }
    }

    Configuration::Instance().BrokerURI = strBrokerURI;

    std::cout << "Initializing the ActiveMQCPP library" << std::endl;
    activemq::library::ActiveMQCPP::initializeLibrary();
    
    PodFactory&                     thePodFactory = PodFactory::Instance();
    BulletFactory&                  theBulletFactory = BulletFactory::Instance();
    auto&                           theEntityGameEventFactory = FactoryT<GameEventBuffer, EntityGameEvent_Dependencies>::Instance();
    auto&                           theSecurityGameEventFactory = FactoryT<GameEventBuffer, SecurityGameEvent_Dependencies>::Instance();
    EventDispatcher::_Dependencies  theEventDispatcherDependencies(thePodFactory, theBulletFactory, theEntityGameEventFactory, theSecurityGameEventFactory);
    EventDispatcher&                theEventDispatcher = EventDispatcher::Instance(&theEventDispatcherDependencies);

    std::cout << "main creating SimpleAsyncProducer with strBrokerURI " << Configuration::Instance().BrokerURI << std::endl;
    SimpleAsyncProducer*                pSimpleAsyncProducer = new SimpleAsyncProducer(Configuration::Instance().BrokerURI, strGameEventOutDestinationURI, true);
    MessageDispatcher::_Dependencies    theMessageDispatcherDependencies(pSimpleAsyncProducer);
    MessageDispatcher&                  theMessageDispatcher = MessageDispatcher::Instance(&theMessageDispatcherDependencies);
    
    SimpleAsyncConsumer*                pSimpleAsyncConsumer = new SimpleAsyncConsumer(Configuration::Instance().BrokerURI, strCommandInDestinationURI);
    MessageConsumer::_Dependencies      theMessageConsumerDependencies(pSimpleAsyncConsumer);
    MessageConsumer&                    theMessageConsumer = MessageConsumer::Instance(&theMessageConsumerDependencies);

    auto&                               theSecurityCommandBufferFactory = FactoryT<redhatgamedev::srt::CommandBuffer, SecurityCommand_Dependencies>::Instance();
    CommandConsumer::_Dependencies      theCommandConsumerDependencies(&theMessageConsumer, theSecurityCommandBufferFactory);
    CommandConsumer&                    theCommandConsumer = CommandConsumer::Instance(&theCommandConsumerDependencies);
    
    auto&                           theJoinSecurityCommandFactory = FactoryT<JoinSecurityCommand, JoinSecurityCommand::_SecurityDependencies>::Instance();
    auto&                           theLeaveSecurityCommandFactory = FactoryT<LeaveSecurityCommand, LeaveSecurityCommand::_SecurityDependencies>::Instance();
    auto&                           theDualStickRawInputCommandFactory = FactoryT<DualStickRawInputCommand, DualStickRawInputCommand::_RawInputDependencies>::Instance();
    CommandQueue::_Dependencies     theCommandQueueDependencies(theJoinSecurityCommandFactory, theLeaveSecurityCommandFactory, theDualStickRawInputCommandFactory, theCommandConsumer);
    CommandQueue&                   theCommandQueue = CommandQueue::Instance(&theCommandQueueDependencies);
    
    Server* pServer = new Server(theEventDispatcher, theMessageDispatcher, theMessageConsumer, theCommandConsumer, theCommandQueue);

    //pServer->run();
    
    // Wait to exit.
    std::cout << "Press 'q' to quit" << std::endl;
    while( std::cin.get() != 'q') {}

    delete pServer;
    pServer = NULL;
    
    activemq::library::ActiveMQCPP::shutdownLibrary();
    return 0;
}
