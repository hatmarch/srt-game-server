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

#include "B2DBullet.h"
#include "B2DWorld.h"
//#include "../../../ThirdParty/Box2D/Box2D/Box2D/Box2D.h"
#include <Box2D/Box2D.h>
#include <assert.h>


// Constructor
B2DBullet::_Dependencies::_Dependencies(const b2Vec2& b2v2GunPosition, const b2Vec2& b2v2GunVelocity) :
    m_b2v2GunPosition(b2v2GunPosition),
    m_b2v2GunVelocity(b2v2GunVelocity)
{
    // Override the defaults where appropriate
    m_ab2BodyDef.bullet = true;
    
    // Set the size of our shape
    m_b2CircleShape.m_radius = 0.25f;
    
    // Set the fixture and use the shape
    //m_ab2FixtureDef.filter.groupIndex = -1;
    m_ab2FixtureDef.filter.categoryBits = BULLET;//0x0004;
    m_ab2FixtureDef.filter.maskBits = BOUNDARY | POD;//0x0002;
    m_ab2FixtureDef.shape = &m_b2CircleShape;
    
    m_ab2BodyDef.position = b2v2GunPosition;
    m_ab2BodyDef.linearVelocity = b2v2GunVelocity;
}


// Constructor(s)
B2DBullet::B2DBullet(B2DBullet::_Dependencies& theDependencies) :
    AB2DEntity(B2DWorld::Factory().CreateBody(&theDependencies.BodyDef))
{
    m_pb2Body->CreateFixture(&theDependencies.FixtureDef);
    m_pb2Fixture = m_pb2Body->GetFixtureList();
}

// Destructor(s)
B2DBullet::~B2DBullet()
{
    //std::cout << "B2DBullet::~B2DBullet()..." << std::endl;
}

// Method(s)
void B2DBullet::Fire(b2Vec2& b2v2FiringDirection)
{
    using namespace std;
    
    b2v2FiringDirection.Normalize();
    b2Vec2 b2v2Force = b2v2FiringDirection;
    //cout << "b2v2FiringDirection x " << b2v2FiringDirection.x << " y " << b2v2FiringDirection.y << endl;
    b2v2Force *= 40.0f;
    //cout << "b2v2Force x " << b2v2Force.x << " y " << b2v2Force.y << endl;
    m_pb2Body->ApplyForceToCenter(b2v2Force, false);
}
