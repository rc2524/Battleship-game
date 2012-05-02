#ifndef BATTLELOCALWINDOW_H
#define BATTLELOCALWINDOW_H

#include <QDialog>
#include <QTextBrowser>
#include <iostream>
#include "Board.h"
#include "Ship.h"
#include "Location.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

static int seed = time(NULL);

namespace Ui {
    class battleLocalWindow;
}

class battleLocalWindow : public QDialog
{
    Q_OBJECT

public:
    explicit battleLocalWindow(QWidget *parent = 0);
    ~battleLocalWindow();
    void createPlayer1Board();
    void createPlayer2Board();
    void nextTurn();

private slots:
    void createRandomBoard();
    void createCustomBoard();
    void fire();

private:
    Ui::battleLocalWindow *ui;
    int CurrentPlayer;
    Board *Player1Board;
    Board *Player2Board;
    Board *EnemyBoard;
    Board *PlayerBoard;
    QString testOut;
    void switchPlayer();
    void printBoardText(Board *boardToPrint, QTextBrowser *textbox, bool showAll);
    void gameOver();
    bool checkGame(); //Check EnemyBoard
    bool goodCoordinate(int row, int col);
};

#endif // BATTLELOCALWINDOW_H
