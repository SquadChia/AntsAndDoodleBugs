#ifndef ORGANISM_H
#define ORGANISM_H

#include <iostream>
#include <QtWidgets>
#include <QWidget>
#include <QGraphicsRectItem>
#include <QGraphicsItem>





class Organism : public QGraphicsRectItem
{
public:
    Organism();
    virtual ~Organism();
    virtual void move();
    virtual void resetStarve();
    virtual void starve();
    virtual void breed();
    virtual bool isStarving() const;
    void incrementBreed();
    bool hasAlreadyMoved() const;
    bool isBreedingTime() const;
    void setMoved();
    void resetMoved();


    static int getCount();

    friend std::ostream& operator<<(std::ostream& out, const Organism& printMe) { return printMe.display(out); }

    int x_pos;
    int y_pos;

protected:
    int timeToBreed; // How many turns left to breed; breed @0
    bool hasMoved; // Has the organism moved yet this turn?

private:
    static int count; // tracks how many organisms exist

    virtual std::ostream& display(std::ostream& out) const { std::cout << "ERROR"; return out; }
};

#endif // ORGANISM_H
