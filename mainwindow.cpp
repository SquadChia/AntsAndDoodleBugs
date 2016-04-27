#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsRectItem>
#include <QLineEdit>
#include <QPushButton>
#include <QRect>
#include <QPixmap>
#include <QPalette>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAdd_triggered()
{
    ui->setupUi(this);
    QMainWindow * window = new QMainWindow;
    QLineEdit * type = new QLineEdit(window);
    window->show();

}

void MainWindow::on_actionAdd_Jewels_triggered()
{

    ui->setupUi(this);
    QMainWindow * window = new QMainWindow;
    QPushButton * jewels5 = new QPushButton("Purchase Five Jewels",window );
    QPushButton * jewels10 = new QPushButton("Purchase Ten Jewels",window );
    QPushButton * jewels15 = new QPushButton("Purchase Fifteen Jewels",window );
    QPushButton * jewels20 = new QPushButton("Purchase Twenty Jewels",window );
    jewels5->setGeometry(0,0,130,30);
    jewels10->setGeometry(0,31, 130, 30);
    jewels15->setGeometry(0,61, 130, 30);
    jewels20->setGeometry(0,91, 130, 30);
    window->show();
}

