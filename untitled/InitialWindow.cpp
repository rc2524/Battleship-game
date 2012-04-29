#include <QtGui>

#include "InitialWindow.h"
#include "battlenetworkwindow.h"
#include "battleaigame.h"
#include "battlelocalgame.h"

InitialWindow::InitialWindow(QWidget *parent):
    QDialog(parent),
    ui(new Ui::InitialWindow)
{
    ui->setupUi(this);
    connect(ui->Network, SIGNAL(pressed()), this, SLOT(NetworkPlay()));
    connect(ui->Local2, SIGNAL(pressed()), this, SLOT(LocalPlay()));
    connect(ui->Computer, SIGNAL(pressed()), this, SLOT(AIPlay()));
    connect(ui->ExitButton, SIGNAL(pressed()), this, SLOT(close()));

}
InitialWindow::~InitialWindow()
{
    delete ui;
}

void InitialWindow::closeEvent(QCloseEvent *e ){
        this->close();
}

void InitialWindow::NetworkPlay(){
    BattleNetworkWindow *NetWindow = new BattleNetworkWindow();
    NetWindow->show();
    this->close();
}

void InitialWindow::AIPlay(){
    BattleAIGame *ComputerPlay = new BattleAIGame();
    ComputerPlay->show();
    this->close();
}

void InitialWindow::LocalPlay(){
    BattleLocalGame *TwoPlay = new BattleLocalGame();
    TwoPlay->show();
    this->close();

}
