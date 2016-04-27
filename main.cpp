#include "mainwindow.h"
#include "grid.h"
#include <iostream>
#include <QTimer>
#include <run.h>
#include <QDebug>
#include <QKeyEvent>
#include <QtWidgets>
#include <QPixmap>

using namespace std;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QGraphicsView * viewGrid = new QGraphicsView;
    MainWindow  w;

    Run * game01 = new Run();


    game01->setup(viewGrid);
    game01->addWidget(&w);
    qDebug() << "check1";

    viewGrid->setScene(game01);

    viewGrid->show();



    // QTimer * timer = new QTimer(bugGrid);
    // QObject::connect(timer,SIGNAL(timeout()), bugGrid, SLOT(move()));
    qDebug() << "check2";
    return a.exec();
}
