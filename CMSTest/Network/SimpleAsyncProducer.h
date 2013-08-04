//
//  SimpleAsyncProducer.h
//  CMSTest
//
//  Created by Roddie Kieley on 12-10-28.
//  Copyright (c) 2012 Roddie Kieley. All rights reserved.
//

#ifndef __CMSTest__SimpleAsyncProducer__
#define __CMSTest__SimpleAsyncProducer__


/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "decaf/lang/Runnable.h"
#include <string>

namespace cms
{
    class Connection;
    class Session;
    class Destination;
    class MessageProducer;
    class AsyncCallback;
}


class SimpleAsyncProducer :
    public decaf::lang::Runnable
{
private:
    
    // ActiveMQ-CPP
    cms::Connection*        m_pConnection;

    cms::Destination*       m_pDestination;
    cms::MessageProducer*   m_pMessageProducer;
    bool                    m_bUseTopic;
    bool                    m_bClientAck;
    bool                    m_bOwnDestination;
    std::string             m_strBrokerURI;
    std::string             m_strDestinationURI;
    
    // Helper(s)
    void Setup();
    void Teardown();
    
public:
    cms::Session*           m_pSession; //temp
    // Constructor(s)
    SimpleAsyncProducer(const std::string& strBrokerURI,
                   const std::string& strDestinationURI,
                   bool bUseTopic = false,
                   bool bClientAck = false);

    SimpleAsyncProducer(const std::string& strBrokerURI,
                   const cms::Destination* pDestination = NULL,
                   bool bUseTopic = false,
                   bool bClientAck = false);
    
    // Destructor(s)
    virtual ~SimpleAsyncProducer();
    
    // Method(s)
    virtual void run();
    
    // Function(s)
    void close();
    //6767void Send(std::string& strToSend);
    void Send(std::string& strToSend, cms::AsyncCallback* pAsyncCallback = NULL);
    void Send(const unsigned char* pucArray, int iSize);
};

#endif /* defined(__CMSTest__SimpleAsyncProducer__) */