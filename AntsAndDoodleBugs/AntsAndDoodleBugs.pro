#-------------------------------------------------
#
# Project created by QtCreator 2016-04-17T18:39:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AntsAndDoodleBugs
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    organism.cpp \
    doodlebug.cpp \
    ant.cpp \
    grid.cpp \
    run.cpp

HEADERS  += mainwindow.h \
    organism.h \
    doodlebug.h \
    ant.h \
    grid.h \
    run.h

FORMS    += mainwindow.ui
