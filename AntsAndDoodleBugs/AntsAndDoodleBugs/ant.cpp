#include "ant.h"

#include <iostream>

unsigned Ant::count = 0;

Ant::Ant()
{
    Organism();
    timeToBreed = 3;
    ++count;
}

Ant::~Ant()
{
    --count;
}

void Ant::move()
{
    setMoved();
    incrementBreed();
}

void Ant::breed()
{
    timeToBreed = 3;
}

unsigned Ant::getCount()
{
    return count;
}







