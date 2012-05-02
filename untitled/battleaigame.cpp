#include "battleaigame.h"
#include "ui_battleaigame.h"
#include <QMessageBox>

using namespace std;
BattleAIGame::BattleAIGame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BattleAIGame)
{
    ui->setupUi(this);

    //Make AI Board
    AIBoard = new Board(10,10);
    PlayerTurn = false;
    createRandomBoard();

    PlayerTurn = true;
    PlayerBoard = new Board(10,10);
    EnemyBoard = new Board(10,10);

    //Disable Fire button and connect buttons
    ui->FireButton->setEnabled(FALSE);
    connect(ui->RandomButton, SIGNAL(pressed()), this, SLOT(createRandomBoard()));
    connect(ui->CustomButton, SIGNAL(pressed()), this, SLOT(createCustomBoard()));
    connect(ui->FireButton, SIGNAL(pressed()), this, SLOT(fire()));
    srand(aiseed);
}

BattleAIGame::~BattleAIGame()
{
    delete ui;
}

void BattleAIGame::createRandomBoard(){
    Board* boardIN;
    if(PlayerTurn == false){
        boardIN = AIBoard;
    }
    else{
        boardIN = PlayerBoard;
        //Disable buttons. No more boards needed
        ui->RandomButton->setEnabled(FALSE);
        ui->CustomButton->setEnabled(FALSE);
        ui->FireButton->setEnabled(TRUE);
    }

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

    //Place Patrol Boat
    Ship Minow( PT_BOAT );
    while(!boardIN->placeShip(Minow, PT_spot, PT_direc)){
        PT_spot.setColumn(rand()%10);
        PT_spot.setRow(rand()%10);
        PT_direc = rand()%4 + 1; // 1-5
    }
   // cout<<"Patrol(2) "<<PT_spot.getRow()<<","<<PT_spot.getColumn() << " " <<PT_direc<<endl;

    //Place Destroyer
    Ship Farragut(DESTROYER);
    while(!boardIN->placeShip(Farragut, DES_spot, DES_direc)){
        DES_spot.setColumn(rand()%10);
        DES_spot.setRow(rand()%10);
        DES_direc = rand()%4 + 1; // 1-5
    }
    //cout<<"Destroyer(3) "<<DES_spot.getRow()<<","<<DES_spot.getColumn()<< " " <<DES_direc<<endl;


    //Place Submarine
    Ship Virginia(SUBMARINE);
     while(!boardIN->placeShip(Virginia, SUB_spot, SUB_direc)){
        SUB_spot.setColumn(rand()%10);
        SUB_spot.setRow(rand()%10);
        SUB_direc = rand()%4 + 1; // 1-5
     }
    //cout<<"Submarine(3) "<<SUB_spot.getRow()<<","<<SUB_spot.getColumn()<< " " <<SUB_direc<<endl;

    //Place Battleship
    Ship Iowa(BATTLESHIP);
    while(!boardIN->placeShip(Iowa, BAT_spot, BAT_direc)){
        BAT_spot.setColumn(rand()%10);
        BAT_spot.setRow(rand()%10);
        BAT_direc = rand()%4 + 1; // 1-5
    }
    //cout<<"BattleShip(4) "<<BAT_spot.getRow()<<","<<BAT_spot.getColumn()<< " " <<BAT_direc<<endl;

    //Place Carrier
    Ship Enterprise( CARRIER );
    while(!boardIN->placeShip(Enterprise, CAR_spot, CAR_direc)){
        CAR_spot.setColumn(rand()%10);
        CAR_spot.setRow(rand()%10);
        CAR_direc = rand()%4 + 1; // 1-5
    }
    //cout<<"Carrier(5) "<<CAR_spot.getRow()<<","<<CAR_spot.getColumn()<< " " <<CAR_direc<<endl;
    if(PlayerTurn == TRUE){
        printBoardText(PlayerBoard,ui->PlayerGameBoard, TRUE); //Player's Board
        printBoardText(AIBoard,ui->OpponentGameBoard, FALSE); //Opponent's Board
    }
}


void BattleAIGame::createCustomBoard(){
//Needs code
    QMessageBox::information(this, tr("Status: ERROR"),
                             tr("Custom Board Creation not available. Please create random board"));
    ui->CustomButton->setEnabled(FALSE);
}


void BattleAIGame::nextTurn(){
    PlayerTurn = !PlayerTurn;
    if(PlayerTurn == true){
        EnemyBoard = AIBoard;
        printBoardText(PlayerBoard,ui->PlayerGameBoard, TRUE); //Player's Board
        printBoardText(AIBoard,ui->OpponentGameBoard, FALSE); //Opponent's Board
    }
    else{
        EnemyBoard = PlayerBoard;
        AIMove();
    }
}

void BattleAIGame::sunkShip(){
    shipNode* pShip;
    if (PlayerTurn == true)
       pShip = AIBoard->getShipLinkedList();
    else
        pShip = PlayerBoard->getShipLinkedList();
    for (; pShip; pShip = pShip->next) {
        if ( pShip->data.getStatus() == 0 ) { // Ship is sunk
            if(PlayerTurn == true){
                switch (pShip->data.getShipType()){
                    case 1:
                    ui->Enemy_Pt->setText("<s>Patrol Boat</s>");
                       break;
                   case 2:
                    ui->Enemy_Des->setText("<s>Destroyer</s> ");
                       break;
                    case 3:
                       ui->Enemy_Sub->setText("<s>Submarine</s> ");
                       break;
                    case 4:
                       ui->Enemy_Bat->setText("<s>Battleship</s> ");
                       break;
                    case 5:
                       ui->Enemy_Car->setText("<s>Carrier</s> ");
                       break;
            }
        }
           else{
               switch (pShip->data.getShipType()){
                   case 1:
                      ui->Enemy_Pt->setText("<s>Patrol Boat<\s>");
                      break;
                   case 2:
                      ui->Player_Des->setText("<s>Destroyer<\s>");
                      break;
                   case 3:
                      ui->Player_Sub->setText("<s>Submarine<\s>");
                      break;
                   case 4:
                      ui->Player_Bat->setText("<s>Battleship<\s>");
                      break;
                   case 5:
                      ui->Player_Car->setText("<s>Carrier<\s>");
                      break;
            }

            }
        }
    }
}

bool BattleAIGame::checkGame(){
    return EnemyBoard->gameStatus();
}

bool BattleAIGame::goodCoordinate(int row, int col){
    bool correctRow = (row>=0 && row<=9);
    bool correctCol = (col>=0 && col<=9 );
    if(correctRow && correctCol)
        return TRUE;
    else
        return FALSE;
}

void BattleAIGame::fire(){
    int xFire = ui->FireRowText->text().toInt();
    int yFire = ui->FireColText->text().toInt();
    QString playerName;

    if(ui->FireRowText->text() == ""){
        QMessageBox::information(this, tr("Bad Coordinates"),
                                 tr("No X coordinate entered. Please enter valid coordinate"));
        return;
    }
    else if(ui->FireColText->text() == ""){
        QMessageBox::information(this, tr("Bad Coordinates"),
                                 tr("No Y coordinate entered. Please enter valid coordinate"));
        return;
    }
    else if(!goodCoordinate(xFire, yFire)){
        QMessageBox::information(this, tr("Bad Coordinates"),
                                 tr("Bad coordinates entered. Please enter valid coordinates"));
        return;
    }
    if(PlayerTurn==true){
        EnemyBoard = AIBoard;
    }
    else{
        EnemyBoard = PlayerBoard;
    }

    Location firePos(xFire,yFire);
    if(EnemyBoard->getSpotValue(firePos) >2){
        QMessageBox::information(this, tr("Status: ERROR"),
                                 tr("Attempt to fire on repeat coordinates."));
        return;
    }
    else if(EnemyBoard->recieveShot(firePos)){
        QMessageBox::information(this, tr("Status: HIT"),
                                 tr("HIT at coordinate ")+ QString::number(firePos.getRow())
                                 +"," + QString::number(firePos.getColumn()));
        sunkShip();
    }
    else
        QMessageBox::information(this, tr("Status: MISS"),
                                 tr("MISS at coordinate ")+ QString::number(firePos.getRow())
                                 +"," + QString::number(firePos.getColumn()));

    if(!checkGame()){
        if(PlayerTurn == true)
            playerName = "Player Wins. No Matrix in the future.";
        else
            playerName = "Computer Wins. Good game meatbag.";
        QMessageBox::information(this, tr("GAME OVER"), playerName);
        this->close();
    }
    nextTurn();
}

void BattleAIGame::printBoardText(Board* boardToPrint, QTextBrowser *textbox, bool showAll ){
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

void BattleAIGame::AIMove(){
    Location computerFire;

    computer.input_status(*AIBoard);
    computerFire = computer.guess();
    ui->FireRowText->setText(QString::number(computerFire.getRow(),10));
    ui->FireColText->setText(QString::number(computerFire.getColumn(),10));
    fire();
    ui->FireColText->clear();
    ui->FireRowText->clear();
}
