//
//  SecurityCommandBufferFactory.cpp
//  CMSTest
//
//  Created by Roddie Kieley on 13-07-14.
//  Copyright (c) 2013 Roddie Kieley. All rights reserved.
//

#include "SecurityCommandBufferFactory.h"
#include <assert.h>


// Constructor
SecurityCommand_Dependencies::
SecurityCommand_Dependencies(const SecurityCommandBuffer_SecurityCommandBufferType& anSecurityCommandBufferType) :
    m_anSecurityCommandBufferType(anSecurityCommandBufferType)
{
}

// Destructor
SecurityCommand_Dependencies::
~SecurityCommand_Dependencies()
{
    
}


//SecurityCommand* SecurityCommandFactory::Create(SecurityCommand_Dependencies& anSecurityCommand_Dependencies)
//{
//    SecurityCommand* pSecurityCommand = NULL;
//
//    CreatedEvent(this, pSecurityCommand);
//    return pSecurityCommand;
//}

// Constructor
LeaveSecurityCommand_Dependencies::
LeaveSecurityCommand_Dependencies(const SecurityCommandBuffer_SecurityCommandBufferType& anSecurityCommandBufferType,
                                  const std::string& strUUID) :
    m_strUUID(strUUID),
    SecurityCommand_Dependencies(anSecurityCommandBufferType)
{
}

// Destructor
LeaveSecurityCommand_Dependencies::
~LeaveSecurityCommand_Dependencies()
{
    
}