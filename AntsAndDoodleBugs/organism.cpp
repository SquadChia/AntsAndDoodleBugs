#include "organism.h"

#include <iostream>

int Organism::count = 0;

Organism::Organism()
{
    ++count;
    hasMoved = false;
}

Organism::~Organism()
{
    --count;
}

void Organism::move()
{
    setMoved();
    incrementBreed();
}

void Organism::resetStarve()
{
    std::cout << "ERROR! Organism::resetStarve() called.\n";
}

void Organism::starve()
{
    std::cout << "ERROR! Organism::starve() called.\n";
}

void Organism::breed()
{
    std::cout << "ERROR! Organism::breed() called.\n";
}

bool Organism::isStarving() const
{
    std::cout << "ERROR! Organism::isStarving() called.\n";
    return false;
}

void Organism::incrementBreed()
{
    --timeToBreed;
}

bool Organism::hasAlreadyMoved() const
{
    return hasMoved;
}

bool Organism::isBreedingTime() const
{
    return timeToBreed == 0;
}

void Organism::setMoved()
{
    hasMoved = true;
}

void Organism::resetMoved()
{
    hasMoved = false;
}


int Organism::getCount()
{
    return count;
}

void Organism::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget, bool type, int x, int y)
{
    QRectF rect = boundingRect(x, y);
    if (type == true)
    {
        QPen pen(Qt::red, 3);
        painter->setPen(pen);
        painter->drawRect(rect);
    }
    else
    {
        QPen pen(Qt::blue, 3);
        painter->setPen(pen);
        painter->drawRect(rect);
    }

}

QRectF Organism::boundingRect(int x, int y) const
{
    return QRectF(x, y, 10, 10);
}
