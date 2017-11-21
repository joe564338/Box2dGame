#pragma once
#ifndef WORLD_H
#define WORLD_H
#include "Box2D.h"
class World
{
public:
	
	World(b2World* worldPtr);
	~World();
	b2World* physWorld;
	
	

private:

};


#endif // !WORLD_H
