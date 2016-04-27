#ifndef DOODLEBUG_H
#define DOODLEBUG_H

#include <QGraphicsRectItem>
#include "organism.h"

class Doodlebug : public Organism
{
public:
    Doodlebug();
    ~Doodlebug();
    void move();
    void breed();
    void resetStarve();
    bool isStarving() const;

    static unsigned getCount();


private:
    void starve(); // get closer to starving
    int timeToStarve; // How many turns left to starve; starve @0

    static unsigned count; // tracks how many doodlebugs exist

    std::ostream& display(std::ostream& out) const { std::cout << "X"; return out; }
};

#endif // DOODLEBUG_H
