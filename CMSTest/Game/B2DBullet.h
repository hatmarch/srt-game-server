//
//  B2DBullet.h
//  CMSTest
//
//  Created by Roddie Kieley on 13-05-12.
//  Copyright (c) 2013 Roddie Kieley. All rights reserved.
//

#ifndef __CMSTest__B2DBullet__
#define __CMSTest__B2DBullet__

#include "AB2DBodyDefinition.h"
#include "../../../ThirdParty/box2d/Box2D/Box2D/Box2D.h"

class UserData;


class B2DBulletDefinition :
    public AB2DBodyDefinition
{
protected:
    b2CircleShape       m_ab2CircleShape;
    
    // Constructor(s)
    B2DBulletDefinition();
    
public:
    static B2DBulletDefinition        Definition;
};

class AB2DEntity
{
protected:
    b2Body*         m_pb2Body;
    
    // Constructor(s)
    AB2DEntity();
    
    // Destructor
    virtual ~AB2DEntity();
    
public:
    // Method(s)
    void SetUserData(UserData* pUserData);
};

class B2DBullet :
    public AB2DEntity
{
private:
    
protected:
    b2Vec2              m_b2v2InitialPosition;
    b2Vec2              m_b2v2InitialDirection;
    UserData*           m_pUserData;

    // Helper(s)
    void CreateBullet();
    
public:
    // Constructor(s)
    B2DBullet(const b2Vec2& b2v2Position, b2Vec2& b2v2Direction, UserData* pUserData);
    
    // Destructor(s)
    ~B2DBullet();
    
    // Callback(s)
    void OnB2DBodyCreated(b2Body* pb2bBullet);
};


#endif /* defined(__CMSTest__B2DBullet__) */
