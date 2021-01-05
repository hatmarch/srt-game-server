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

#include "JoinSecurityCommand.h"
#include "../Application/Configuration.h"
#include "../Proto/CommandBuffer.pb.h"
#include "../Proto/SecurityCommandBuffer.pb.h"
#include "../Network/SimpleAsyncProducer.h"
#include <cms/Destination.h>
#include <cms/BytesMessage.h>
//#include <cms/TemporaryQueue.h>
#include <decaf/util/UUID.h>
#include <assert.h>
#include <iostream>


// Constructor
JoinSecurityCommand::JoinSecurityCommand(_SecurityDependencies& theDependencies) :
    SecurityCommand(theDependencies)
{
    
}

// Destructor
JoinSecurityCommand::~JoinSecurityCommand()
{
    
}

// Method(s)
void JoinSecurityCommand::Execute()
{
    using namespace redhatgamedev::srt;
    
    assert(m_pBytesMessage);
    assert(m_pCommandBuffer);
    
    std::string     strUUID = "";
    const SecurityCommandBuffer& aSecurityCommandBuffer = m_pCommandBuffer->securitycommandbuffer();
    
    decaf::util::UUID aNewUUID = decaf::util::UUID::randomUUID();
    strUUID = aNewUUID.toString();
    const cms::Destination* pReplyToDestination = m_pBytesMessage->getCMSReplyTo();
    assert(pReplyToDestination);
    
    // TODO: Make not super inefficient
    std::cout << "creating Simple Async Producer" << std::endl;
    SimpleAsyncProducer* pSimpleAsyncProducer = new SimpleAsyncProducer(Configuration::Instance().BrokerURI, pReplyToDestination, false, true);

    std::cout << "sending player UUID: " << strUUID << std::endl;
    pSimpleAsyncProducer->Send(strUUID);
    delete pSimpleAsyncProducer;
    
    ExecutedEvent(this, strUUID);
}
