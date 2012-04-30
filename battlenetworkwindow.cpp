#include "battlenetworkwindow.h"
#include "ui_battlenetworkwindow.h"
#include "battlenetworkgame.h"
#include "InitialWindow.h"
#include <QMessageBox>

BattleNetworkWindow::BattleNetworkWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BattleNetworkWindow)
{
    ui->setupUi(this);
    connect(ui->ReturnToButton, SIGNAL(pressed()), this, SLOT(returnToInital()));
    connect(ui->PlayWithButton, SIGNAL(pressed()), this, SLOT(startNetworkGame()));
    connect(&client, SIGNAL(newParticipant(QString)), this, SLOT(newParticipant(QString)));
    connect(&client, SIGNAL(participantLeft(QString)), this, SLOT(participantLeft(QString)));
    myNickName = client.nickName();
    newParticipant(myNickName);
}

BattleNetworkWindow::~BattleNetworkWindow(){
    delete ui;
}

void BattleNetworkWindow::closeEvent(QCloseEvent *){
    this->close();
}

void BattleNetworkWindow::returnToInital(){
    InitialWindow *mainWin = new InitialWindow();
    mainWin->show();
    this->close();
}

void BattleNetworkWindow::participantLeft(const QString &nick){
    if (nick.isEmpty())
        return;

    QList<QListWidgetItem *> items = ui->NetworkPlayersList->findItems(nick,
                                                           Qt::MatchExactly);
    if (items.isEmpty())
        return;

    delete items.at(0);
}

void BattleNetworkWindow::newParticipant(const QString &nick) {
        if (nick.isEmpty())
            return;

        ui->NetworkPlayersList->addItem(nick);
    }

void BattleNetworkWindow::startNetworkGame(){
    //linke highlighted list
    QList<QListWidgetItem *> opponentList = ui->NetworkPlayersList->selectedItems();
    if(opponentList.size()>1){
        //error please select only one opponent;
        QMessageBox::information(this, tr("Too Many"), tr("Select only one opponent"));
    }
    else if(opponentList.size()<1){
        QMessageBox::information(this, tr("Select Opponent"), tr("Please Select an Opponent"));

    }
    else{
        battlenetworkgame *NetGame = new battlenetworkgame();
        NetGame->setOpponentName(opponentList.at(0)->text());
        NetGame->show();
        this->close();
    }

}

