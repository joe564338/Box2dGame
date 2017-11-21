#include "World.h"

World::World(b2World* worldPtr)
{
	physWorld = worldPtr;
}

World::~World()
{
}