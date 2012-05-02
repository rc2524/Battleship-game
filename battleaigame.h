#ifndef BATTLEAIGAME_H
#define BATTLEAIGAME_H

#include <QDialog>
#include <QTextBrowser>

#include "AI.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

static int aiseed = time(NULL);

namespace Ui {
    class BattleAIGame;
}

class BattleAIGame : public QDialog
{
    Q_OBJECT

public:
    explicit BattleAIGame(QWidget *parent = 0);
    ~BattleAIGame();

private slots:
    void createRandomBoard();
    void createCustomBoard();
    void fire();


private:
    Ui::BattleAIGame *ui;
    AI computer;
    bool PlayerTurn;
    Board* PlayerBoard;
    Board* AIBoard;
    Board* EnemyBoard;
    QString testOut;
    void sunkShip();
    bool checkGame();
    void nextTurn();
    void AIMove();
    bool goodCoordinate(int row, int col);
    void printBoardText(Board* boardToPrint, QTextBrowser *textbox, bool showAll );

};
#endif // BATTLEAIGAME_H
