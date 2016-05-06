#ifndef RUN_H
#define RUN_H

#include "grid.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QGraphicsRectItem>
#include <QObject>
#include<QtCore>



class Run : public QGraphicsRectItem, public QGraphicsScene
{
public:
    Run();
    void setup(QGraphicsView * view);
    void keyPressEvent(QKeyEvent * event);
    void reset();
    QString getNumAnts();
    QString getNumDoodleBugs();
    void setAnts(QString ants);
    void setDbugs(QString Dbugs);
    void play();
private:
    Grid* p_Grid;
    int turnNumber;
    QGraphicsTextItem* r_numAnts;
    QGraphicsTextItem* r_numDoodleBugs;



};



#endif // RUN_H
