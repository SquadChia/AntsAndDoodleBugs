#include "mainwindow.h"
#include "grid.h"
#include <iostream>
#include <QTimer>
#include <run.h>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsView * viewGrid = new QGraphicsView;
    QGraphicsScene * scene = new QGraphicsScene;
    Run * game01 = new Run();
    game01->setup(scene, viewGrid);
    qDebug() << "check1";


    // QTimer * timer = new QTimer(bugGrid);
    // QObject::connect(timer,SIGNAL(timeout()), bugGrid, SLOT(move()));
    viewGrid->setScene(scene);
    viewGrid->show();
    qDebug() << "check2";
    return a.exec();
}
