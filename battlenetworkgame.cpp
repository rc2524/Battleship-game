#include "battlenetworkgame.h"
#include "ui_battlenetworkgame.h"
#include <QMessageBox>
#include "client.h"

battlenetworkgame::battlenetworkgame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::battlenetworkgame)
{
    ui->setupUi(this);
    CurrentPlayer = 1;
    EnemyBoard = new Board(10,10);
    PlayerBoard = new Board(10,10);
    ui->FireButton->setEnabled(FALSE);
    connect(ui->RandomButton, SIGNAL(pressed()), this, SLOT(createRandomBoard()));
    connect(ui->CustomButton, SIGNAL(pressed()), this, SLOT(createCustomBoard()));
    connect(ui->FireButton, SIGNAL(pressed()), this, SLOT(fire()));
    connect(&client, SIGNAL(newMessage(QString,QString)), this, SLOT(appendMessage(QString,QString)));
    connect(&client, SIGNAL(participantLeft(QString)), this, SLOT(opponentLeft(QString)));
//client
    srand(netseed);
}

battlenetworkgame::~battlenetworkgame(){
    delete ui;
}

void battlenetworkgame::appendMessage(QString x, QString y){
    cout<<x.toStdString()<<"   "<<y.toStdString();
}


void battlenetworkgame::opponentLeft(QString oName){
    QMessageBox::information(this, tr("Game over"), oName + " has left the game. Game can no longer continue. Press Okay to close." );
    this->close();
}

void battlenetworkgame::setOpponentName(QString oName){
    ui->OppName->setText(oName +"'s Board");
    opponentName = oName;
 }

void battlenetworkgame::setPlayerName(QString pName){
    playerName = pName;
}

void battlenetworkgame::switchPlayer(){
    QString temp;
    if(CurrentPlayer==1)
        CurrentPlayer=2;
    else
        CurrentPlayer=1;

    this->hide(); //Hide DialogBox
    temp.setNum(CurrentPlayer,10);
    QMessageBox::information(this, tr("Switch Players"),"Player " + temp + "'s Turn");
    this->show(); //Show DialogBox
}

void battlenetworkgame::printBoardText(Board* boardToPrint, QTextBrowser *textbox, bool showAll ){
    QString str;
    int val;
    testOut.clear();
    for (int i = 0; i < (boardToPrint->getBoardSize().getRow()+1); ++i) {
        if(i==0)
           testOut.append("   ");
        else
            testOut.append(str.setNum((i-1),10));
        testOut.append("  ");

        for (int j = 0; j < boardToPrint->getBoardSize().getColumn(); ++j){
            if(i==0)
                testOut.append(str.setNum(j,10));
            else{
                Location newLoc(i-1,j);
                val = boardToPrint->getSpotValue(newLoc);
                if(!showAll && (val==2)){
                    val = 1; //Opponent shouldn't know where ships are
                }
                testOut.append(str.setNum(val,10));
            }
            testOut.append("  ");
        }
        testOut.append("\n");
    }
    textbox->clear();
    textbox->setText(testOut);
}

void battlenetworkgame::nextTurn(){
    switchPlayer();

    printBoardText(PlayerBoard,ui->PlayerGameBoard, TRUE); //Player's Board
    printBoardText(EnemyBoard,ui->OpponentGameBoard, FALSE); //Opponent's Board
}

void battlenetworkgame::gameOver(){
//check all ship spots see if all sunk
    //ALL YOUR BATTLESHIP BELONG TO ME

}

bool battlenetworkgame::goodCoordinate(int row, int col){
    bool correctRow = (row>=0 && row<=9);
    bool correctCol = (col>=0 && col<=9 );
    if(correctRow && correctCol)
        return TRUE;
    else
        return FALSE;
}

void battlenetworkgame::fire(){
    int xFire = ui->FireRowText->text().toInt();
    int yFire = ui->FireColText->text().toInt();

    if(ui->FireRowText->text() == ""){
        QMessageBox::information(this, tr("Bad Coordinates"),tr("No X coordinate entered. Please enter valid coordinate"));
        return;
    }
    else if(ui->FireColText->text() == ""){
        QMessageBox::information(this, tr("Bad Coordinates"), tr("No Y coordinate entered. Please enter valid coordinate"));
        return;
    }
    else if(!goodCoordinate(xFire, yFire)){
        QMessageBox::information(this, tr("Bad Coordinates"), tr("Bad coordinates entered. Please enter valid coordinates"));
        return;
    }

    Location firePos(xFire,yFire);
    if(EnemyBoard->getSpotValue(firePos) >2){
        QMessageBox::information(this, tr("Status: ERROR"), tr("Attempt to fire on repeat coordinates."));
        return;
    }
    else if(EnemyBoard->recieveShot(firePos))
        QMessageBox::information(this, tr("Status: HIT"), tr("HIT!"));
    else
        QMessageBox::information(this, tr("Status: MISS"), tr("MISS!"));

    if(!checkGame()){
        QMessageBox::information(this, tr("GAME OVER"), tr("Game over"));
    }
    nextTurn();
}

bool battlenetworkgame::checkGame(){
    return EnemyBoard->gameStatus();
}

void battlenetworkgame::createCustomBoard(){
    //Dialog box for each location/ship/direction
    //update board
    //Needs code
    QMessageBox::information(this, tr("Status: ERROR"),
                             tr("Custom Board Creation not available. Please create random board"));
    ui->CustomButton->setEnabled(FALSE);
}

void battlenetworkgame::createRandomBoard(){
    ui->RandomButton->setEnabled(FALSE);
    ui->CustomButton->setEnabled(FALSE);
    ui->FireButton->setEnabled(TRUE);

    Location PT_spot(1,rand()%10);
    Location DES_spot(3,rand()%10);
    Location SUB_spot(5,rand()%10);
    Location BAT_spot(7,rand()%10);
    Location CAR_spot(9,rand()%10);

    int PT_direc(rand()%4 + 1);
    int DES_direc(rand()%4 + 1);
    int SUB_direc(rand()%4 + 1);
    int BAT_direc(rand()%4 + 1);
    int CAR_direc(rand()%4 + 1);

    //do boundary checking
    //Place Patrol Boat
    Ship Minow( PT_BOAT );
    while(!PlayerBoard->placeShip(Minow, PT_spot, PT_direc)){
        PT_spot.setColumn(rand()%10);
        PT_spot.setRow(rand()%10);
        PT_direc = rand()%4 + 1; // 1-5
    }
    cout<<"Patrol(2) "<<PT_spot.getRow()<<","<<PT_spot.getColumn() << " " <<PT_direc<<endl;

    //Place Destroyer
    Ship Farragut(DESTROYER);
    while(!PlayerBoard->placeShip(Farragut, DES_spot, DES_direc)){
        DES_spot.setColumn(rand()%10);
        DES_spot.setRow(rand()%10);
        DES_direc = rand()%4 + 1; // 1-5
    }
    cout<<"Destroyer(3) "<<DES_spot.getRow()<<","<<DES_spot.getColumn()<< " " <<DES_direc<<endl;


    //Place Submarine
    Ship Virginia(SUBMARINE);
     while(!PlayerBoard->placeShip(Virginia, SUB_spot, SUB_direc)){
        SUB_spot.setColumn(rand()%10);
        SUB_spot.setRow(rand()%10);
        SUB_direc = rand()%4 + 1; // 1-5
     }
    cout<<"Submarine(3) "<<SUB_spot.getRow()<<","<<SUB_spot.getColumn()<< " " <<SUB_direc<<endl;

    //Place Battleship
    Ship Iowa(BATTLESHIP);
    while(!PlayerBoard->placeShip(Iowa, BAT_spot, BAT_direc)){
        BAT_spot.setColumn(rand()%10);
        BAT_spot.setRow(rand()%10);
        BAT_direc = rand()%4 + 1; // 1-5
    }
    cout<<"BattleShip(4) "<<BAT_spot.getRow()<<","<<BAT_spot.getColumn()<< " " <<BAT_direc<<endl;

    //Place Carrier
    Ship Enterprise( CARRIER );
    while(!PlayerBoard->placeShip(Enterprise, CAR_spot, CAR_direc)){
        CAR_spot.setColumn(rand()%10);
        CAR_spot.setRow(rand()%10);
        CAR_direc = rand()%4 + 1; // 1-5
    }
    cout<<"Carrier(5) "<<CAR_spot.getRow()<<","<<CAR_spot.getColumn()<< " " <<CAR_direc<<endl;
}
