#include "battlenetworkgame.h"
#include "ui_battlenetworkgame.h"
#include <QMessageBox>

battlenetworkgame::battlenetworkgame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::battlenetworkgame)
{
    ui->setupUi(this);

}

battlenetworkgame::~battlenetworkgame()
{
    delete ui;
}

void battlenetworkgame::setOpponentName(QString oName){
    ui->OppName->setText(oName);
    opponentName = oName;
 }
