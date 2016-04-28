#include "game.h"
#include<iostream>
#include<QFile>
#include <QJsonObject>
#include<QJsonDocument>
#include<QString>
#include<QtGlobal>
#include<QIODevice>

Game::Game()
{

}

voidGame::newGame()
{

}

bool Game::loadGame(SaveFormat saveFormat)
{
    QFile loadFile(saveFormat == Json
            ? QStringLiteral("save.json")
            : QStringLiteral("save.dat"));

        if (!loadFile.open(QIODevice::ReadOnly)) {
            qWarning("Couldn't open save file.");
            return false;
        }

        QByteArray saveData = loadFile.readAll();

        QJsonDocument loadDoc(saveFormat == Json
            ? QJsonDocument::fromJson(saveData)
            : QJsonDocument::fromBinaryData(saveData));

        read(loadDoc.object());

        return true;
}

bool Game::saveGame(SaveFormat saveFormat)const
{
    QFile saveFile(saveFormat == Json
            ? QStringLiteral("save.json")
            : QStringLiteral("save.dat"));

        if (!saveFile.open(QIODevice::WriteOnly)) {
            qWarning("Couldn't open save file.");
            return false;
        }

        QJsonObject gameObject;
        write(gameObject);
        QJsonDocument saveDoc(gameObject);
        saveFile.write(saveFormat == Json
            ? saveDoc.toJson()
            : saveDoc.toBinaryData());

        return true;
}
