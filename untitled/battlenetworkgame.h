#ifndef BATTLENETWORKGAME_H
#define BATTLENETWORKGAME_H

#include <QWidget>
#include "Board.h"
#include <QTextBrowser>
#include "client.h"

static int seed = time(NULL);

using namespace std;

namespace Ui {
    class battlenetworkgame;
}

class battlenetworkgame : public QWidget
{
    Q_OBJECT

public:
    explicit battlenetworkgame(QWidget *parent = 0);
    void setOpponentName(QString oName);
    void setPlayerName(QString pName);
    void createPlayer1Board();
    void createPlayer2Board();
    void nextTurn();

private slots:
    void createRandomBoard();
    void createCustomBoard();
    void opponentLeft(QString oName);
    void appendMessage(QString x, QString y);
    void fire();

private:
    Ui::battlenetworkgame *ui;
    ~battlenetworkgame();
    QString opponentName;
    QString playerName;
    Client client;
    int CurrentPlayer;
   // Board *Player1Board;
   // Board *Player2Board;
    Board *EnemyBoard;
    Board *PlayerBoard;
    QString testOut;
    void switchPlayer();
    void printBoardText(Board *boardToPrint, QTextBrowser *textbox, bool showAll);
    void gameOver();
    bool checkGame(); //Check EnemyBoard
    bool goodCoordinate(int row, int col);
};

#endif // BATTLENETWORKGAME_H
