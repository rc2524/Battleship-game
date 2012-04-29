#include "battlelocalgame.h"
#include "ui_battlelocalgame.h"

BattleLocalGame::BattleLocalGame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BattleLocalGame)
{
    ui->setupUi(this);

}

BattleLocalGame::~BattleLocalGame()
{
    delete ui;
}
