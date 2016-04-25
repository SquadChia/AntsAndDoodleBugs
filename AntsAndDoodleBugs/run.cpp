#include "run.h"
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QDebug>

Run::Run()
{
    qDebug() << "Set focus";
    setFlag(QGraphicsItem::ItemIsFocusable);
    QGraphicsScene::setFocus();
}

void Run::setup(QGraphicsView* viewGrid)
{
    p_Grid = new Grid(20,20,this);

    turnNumber = 0; // Begin timekeeping


    QGraphicsRectItem * gridFrameOuter = new QGraphicsRectItem(-5,-5,210,210);
    QGraphicsRectItem * gridFrameInner = new QGraphicsRectItem(0,0,200,200);
    gridFrameInner->setBrush(QBrush(Qt::lightGray));
    gridFrameOuter->setBrush(QBrush(Qt::gray));

    viewGrid->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    viewGrid->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    viewGrid->show();

    p_Grid->p_scene->addItem(gridFrameOuter);
    p_Grid->p_scene->addItem(gridFrameInner);

    p_Grid->placeDoodlebugs(5);
    p_Grid->placeAnts(100);

}

QRectF Run::boundingRect() const
{
    return QRectF(0,0,0,0);
}

void Run::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rect = boundingRect();
    QPen pen(Qt::red, 3);
    painter->setPen(pen);
    painter->drawRect(rect);
}

void Run::keyPressEvent(QKeyEvent *event)
{

    if (event->key() == Qt::Key_Space)
    {
        qDebug() << "Space pressed.";
        play();
    }
    else if (event->key() == Qt::Key_R)
    {
        qDebug() << "R pressed.";
        reset();
    }
    else if (event->key() == Qt::Key_Escape)
    {
        qDebug() << "Escape pressed.";
        QApplication::quit();
    }
}

void Run::play()
{
    p_Grid->moveDoodlebugs();
    p_Grid->breedDoodlebugs();
    p_Grid->moveAnts();
    p_Grid->breedAnts();
    p_Grid->starveDoodlebugs();
    p_Grid->resetAllMoveFlags();
    ++turnNumber;
}

void Run::reset()
{
    delete p_Grid->p_scene;
    delete p_Grid;

    p_Grid = new Grid();
}


