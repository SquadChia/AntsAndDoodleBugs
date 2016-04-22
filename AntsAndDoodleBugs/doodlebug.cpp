#include "doodlebug.h"

#include <iostream>

unsigned Doodlebug::count = 0;

Doodlebug::Doodlebug()
{
    Organism();
    timeToBreed = 8;
    timeToStarve = 3;
    ++count;
}

Doodlebug::~Doodlebug()
{
    --count;
}

void Doodlebug::move()
{
    setMoved();
    incrementBreed();
    starve();
}

void Doodlebug::resetStarve()
{
    timeToStarve = 3;
}

void Doodlebug::breed()
{
    timeToBreed = 8;
}

void Doodlebug::starve()
{
    --timeToStarve;
}

bool Doodlebug::isStarving() const
{
    return timeToStarve == 0;
}

unsigned Doodlebug::getCount()
{
    return count;
}
