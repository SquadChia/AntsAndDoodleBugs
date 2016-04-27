#ifndef RUN_H
#define RUN_H

#include "grid.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QGraphicsRectItem>



class Run : public QGraphicsRectItem, public QGraphicsScene
{
public:
    Run();
    void setup(QGraphicsView * view);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void keyPressEvent(QKeyEvent * event);
    void play();
    void reset();
    QString getNumAnts();
    QString getNumDoodleBugs();
    void setAnts(QString ants);
    void setDbugs(QString Dbugs);
private:
    Grid* p_Grid;
    int turnNumber;
    QGraphicsTextItem* r_numAnts;
    QGraphicsTextItem* r_numDoodleBugs;

};



#endif // RUN_H
