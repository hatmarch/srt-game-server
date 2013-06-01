//
//  Messenger_Consumer.h
//  CMSTest
//
//  Created by Roddie Kieley on 13-05-19.
//  Copyright (c) 2013 Roddie Kieley. All rights reserved.
//

#ifndef __CMSTest__Messenger_Consumer__
#define __CMSTest__Messenger_Consumer__

#include "Messenger.h"
#include "Poco/BasicEvent.h"
#include <cms/MessageListener.h>
#include <string>
#include <stdint.h>

namespace cms
{
    class Message;
}
class EntityData;
class SimpleAsyncConsumer;



class Messenger::_Consumer :
    public cms::MessageListener
{
        friend class Messenger;
protected:
    class _EventPublisher
    {
    public:
        // Event(s)
        Poco::BasicEvent<const EntityData&>        ReceivedCreateEntityRequest;
        Poco::BasicEvent<const EntityData&>        ReceivedDestroyEntityRequest;
    };
    
private:
    
protected:
    SimpleAsyncConsumer*        m_pSimpleAsyncConsumer;
    
    // Helper(s)
    void Setup(std::string& strBrokerURI, std::string& strDestinationURI);
    void Teardown();
    
public:
    static _EventPublisher                          EventPublisher;
    
    // Constructor(s)
    _Consumer();
    
    // Destructor(s)
    ~_Consumer();
    
    // MessageListener implementation
    virtual void onMessage(const cms::Message* pMessage);
};

#endif /* defined(__CMSTest__Messenger_Consumer__) */
