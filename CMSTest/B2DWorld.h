//
//  B2DWorld.h
//  CMSTest
//
//  Created by Roddie Kieley on 12-10-30.
//  Copyright (c) 2012 Roddie Kieley. All rights reserved.
//

#ifndef __CMSTest__B2DWorld__
#define __CMSTest__B2DWorld__

#include "../../../iPhone/Libraries/Box2D/Include/Box2D.h"
#include <string>


// This is a simple example of building and running a simulation
// using Box2D. Here we create a large ground box and a small dynamic
// box.
class B2DWorld
{
private:
    
protected:
    b2AABB          worldAABB;
    b2World*        world;
    b2Vec2*         gravity;
    b2BodyDef       groundBodyDef;
    b2Body*         groundBody;
    b2PolygonDef    groundShapeDef;
    b2BodyDef       bodyDef;
    b2Body*         body;
    b2PolygonDef    shapeDef;
    b2Vec2          position;
    float32         angle;
    
    float32         timeStep;// = 1.0f / 60.0f;
	int32           iterations;
    
    char            m_szBuf[0xff];
    
public:
    // Constructor(s)
    B2DWorld();
    
    // Destructor
    ~B2DWorld();
    
    // Method(s)
    void CreateBodiesAndShapes();
    void Update(std::string& strText);
};


#endif /* defined(__CMSTest__B2DWorld__) */