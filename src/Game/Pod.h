#ifndef __SRT__Pod__
#define __SRT__Pod__

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

#include "AEntity.h"
//#include "../../../ThirdParty/Box2D/Box2D/Box2D/Box2D.h"
#include <Box2D/Box2D.h>
#include "../Commands/ACommand.h"
#include "../Commands/RawInputCommand.h"
#include "../Commands/DualStickRawInputCommand.h"
#include <Poco/BasicEvent.h>
#include <decaf/util/StlQueue.h>
#include <string>
#include <list>

namespace Rock2D
{
    class Timer;
}
class Bullet;
class AB2DEntity;


class Pod :
    public AEntity
{
    friend class PodFactory;
    
private:
    static uint32_t         s_ui32Count;
    static int16_t          s_i16GroupCount;
    
    
protected:
    Rock2D::Timer*                      m_pBulletTimer;
    decaf::util::StlQueue<Bullet*>      m_BulletQueue;
    
    decaf::util::StlQueue<b2Vec2>       m_b2v2MoveQueue;
    decaf::util::StlQueue<b2Vec2>       m_b2v2ShootQueue;
    
    int16_t                 m_i16GroupCount;
    
    // Helper(s)

public:
    // Event(s)
    static Poco::BasicEvent<Pod*&>    UpdatedEvent;
    
    // Constructor(s)
    Pod(_Dependencies& theDependencies);
    
    // Destructor(s)
    ~Pod();
    
    // Method(s)
    void Update();
    
    // Input Event response
    void HandleDualStickRawInputCommandFactoryCreatedEvent(const void* pSender, DualStickRawInputCommand*& pDualStickRawInputCommand);
    void HandleDualStickRawInputCommandFactoryDestroyedEvent(const void* pSender, DualStickRawInputCommand*& pDualStickRawInputCommand);
    void HandleDualStickRawInputCommandExecutedEvent(const void* pSender, const std::string& strUUID);
};


#endif /* defined(__SRT__Pod__) */
