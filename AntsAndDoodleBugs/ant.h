#ifndef ANT_H
#define ANT_H
#include "organism.h"
#include <QGraphicsRectItem>

class Ant : public Organism
{
public:
    Ant();
    ~Ant();
    void move();
    void breed();

    static unsigned getCount();

private:
    static unsigned count; // tracks how many ants exist

    std::ostream& display(std::ostream& out) const { std::cout << "O"; return out; }
};
#endif // ANT_H
