#include "battleaigame.h"
#include "ui_battleaigame.h"

BattleAIGame::BattleAIGame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BattleAIGame)
{
    ui->setupUi(this);
}

BattleAIGame::~BattleAIGame()
{
    delete ui;
}
