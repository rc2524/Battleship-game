#ifndef BATTLELOCALGAME_H
#define BATTLELOCALGAME_H

#include <QWidget>
#include <iostream>
#include "Board.h"
#include "Ship.h"
#include "Location.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

static int seed = time(NULL);

namespace Ui {
    class BattleLocalGame;
}

class BattleLocalGame : public QWidget
{
    Q_OBJECT

public:
    explicit BattleLocalGame(QWidget *parent = 0);
    ~BattleLocalGame();
    void createPlayer1Board();
    void createPlayer2Board();

private slots:
    void createRandomBoard();
    void createCustomBoard();
private:
    Ui::BattleLocalGame *ui;
    int CurrentPlayer;
    Board *Player1Board;
    Board *Player2Board;
    QString testOut;

};

#endif // BATTLELOCALGAME_H
