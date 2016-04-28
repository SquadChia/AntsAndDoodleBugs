#ifndef GAME_H
#define GAME_H
#include <QJsonObject>
#include <QList>

class Game
{
public:
    Game();
    enum saveFormat{
        Json, Binary
    };

    void newGame();
    bool loadGame(SaveFormat saveFormat);
    bool saveGame(SaveFormat saveFormat) const;
};


#endif // GAME_H
