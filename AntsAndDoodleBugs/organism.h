#ifndef ORGANISM_H
#define ORGANISM_H

#include <iostream>
#include <QGraphicsRectItem>
#include <QtWidgets>
#include <QBrush>
#include <QPainter>




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

    //Overloadeding the virtual functions for coloring
    virtual QRectF boundingRect(int x, int y) const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget, bool type, int x, int y);

    static int getCount();

    friend std::ostream& operator<<(std::ostream& out, const Organism& printMe) { return printMe.display(out); }




protected:
    int timeToBreed; // How many turns left to breed; breed @0
    bool hasMoved; // Has the organism moved yet this turn?

private:
    static int count; // tracks how many organisms exist

    virtual std::ostream& display(std::ostream& out) const { std::cout << "ERROR"; return out; }
};

#endif // ORGANISM_H
