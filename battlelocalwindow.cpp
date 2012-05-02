#include "battlelocalwindow.h"
#include "ui_battlelocalwindow.h"
#include "Board.h"
#include <QMessageBox>
 #include <QStringBuilder>

battleLocalWindow::battleLocalWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::battleLocalWindow)
{
    ui->setupUi(this);
    CurrentPlayer = 1;
    Player1Board = new Board(10,10);
    Player2Board = new Board(10,10);
    ui->PlayerGoing->setText("Player 1's Turn");
    ui->FireButton->setEnabled(FALSE);
    connect(ui->RandomButton, SIGNAL(pressed()), this, SLOT(createRandomBoard()));
    connect(ui->CustomButton, SIGNAL(pressed()), this, SLOT(createCustomBoard()));
    connect(ui->FireButton, SIGNAL(pressed()), this, SLOT(fire()));
    srand(localseed);
}

battleLocalWindow::~battleLocalWindow(){
    delete ui;
}

void battleLocalWindow::switchPlayer(){
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

void battleLocalWindow::printBoardText(Board* boardToPrint, QTextBrowser *textbox, bool showAll ){
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

void battleLocalWindow::nextTurn(){
    switchPlayer();
    if(CurrentPlayer == 1){
        EnemyBoard  =  Player2Board;
        PlayerBoard = Player1Board;
    }
    else{
        EnemyBoard  =  Player1Board;
        PlayerBoard = Player2Board;
    }
    printBoardText(PlayerBoard,ui->PlayerGameBoard, TRUE); //Player's Board
    printBoardText(EnemyBoard,ui->OpponentGameBoard, FALSE); //Opponent's Board
}

void battleLocalWindow::gameOver(){
//check all ship spots see if all sunk
    //ALL YOUR BATTLESHIP BELONG TO ME

}

bool battleLocalWindow::goodCoordinate(int row, int col){
    bool correctRow = (row>=0 && row<=9);
    bool correctCol = (col>=0 && col<=9 );
    if(correctRow && correctCol)
        return TRUE;
    else
        return FALSE;
}

void battleLocalWindow::fire(){
    int xFire = ui->FireRowText->text().toInt();
    int yFire = ui->FireColText->text().toInt();
    QString playerNum;

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
    if(CurrentPlayer==1){
        EnemyBoard = Player2Board;
        playerNum = "1";
    }
    else{
        EnemyBoard = Player1Board;
        playerNum = "2";
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
        QMessageBox::information(this, tr("GAME OVER"), "Game over. Player " % playerNum %"Wins");
        this->close();
    }
    nextTurn();
}

bool battleLocalWindow::checkGame(){
    return EnemyBoard->gameStatus();
}

void battleLocalWindow::createCustomBoard(){
    //Dialog box for each location/ship/direction
    //update board
    //Needs code
    QMessageBox::information(this, tr("Status: ERROR"),
                             tr("Custom Board Creation not available. Please create random board"));
    ui->CustomButton->setEnabled(FALSE);
}

void battleLocalWindow::createRandomBoard(){
    Board* boardIn;
    if(CurrentPlayer == 1){
        boardIn = Player1Board;
        ui->PlayerGoing->setText("Player 2's Turn");
    }
    else if(CurrentPlayer==2){
        ui->PlayerGoing->setText("Player 1's Turn");
        boardIn = Player2Board;
        ui->RandomButton->setEnabled(FALSE);
        ui->CustomButton->setEnabled(FALSE);
        ui->FireButton->setEnabled(TRUE);
    }
    else{//Made boards already
        return; //Should not make it here
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

    //do boundary checking
    //Place Patrol Boat
    Ship Minow( PT_BOAT );
    while(!boardIn->placeShip(Minow, PT_spot, PT_direc)){
        PT_spot.setColumn(rand()%10);
        PT_spot.setRow(rand()%10);
        PT_direc = rand()%4 + 1; // 1-5
    }
    cout<<"Patrol(2) "<<PT_spot.getRow()<<","<<PT_spot.getColumn() << " " <<PT_direc<<endl;

    //Place Destroyer
    Ship Farragut(DESTROYER);
    while(!boardIn->placeShip(Farragut, DES_spot, DES_direc)){
        DES_spot.setColumn(rand()%10);
        DES_spot.setRow(rand()%10);
        DES_direc = rand()%4 + 1; // 1-5
    }
    cout<<"Destroyer(3) "<<DES_spot.getRow()<<","<<DES_spot.getColumn()<< " " <<DES_direc<<endl;


    //Place Submarine
    Ship Virginia(SUBMARINE);
     while(!boardIn->placeShip(Virginia, SUB_spot, SUB_direc)){
        SUB_spot.setColumn(rand()%10);
        SUB_spot.setRow(rand()%10);
        SUB_direc = rand()%4 + 1; // 1-5
     }
    cout<<"Submarine(3) "<<SUB_spot.getRow()<<","<<SUB_spot.getColumn()<< " " <<SUB_direc<<endl;

    //Place Battleship
    Ship Iowa(BATTLESHIP);
    while(!boardIn->placeShip(Iowa, BAT_spot, BAT_direc)){
        BAT_spot.setColumn(rand()%10);
        BAT_spot.setRow(rand()%10);
        BAT_direc = rand()%4 + 1; // 1-5
    }
    cout<<"BattleShip(4) "<<BAT_spot.getRow()<<","<<BAT_spot.getColumn()<< " " <<BAT_direc<<endl;

    //Place Carrier
    Ship Enterprise( CARRIER );
    while(!boardIn->placeShip(Enterprise, CAR_spot, CAR_direc)){
        CAR_spot.setColumn(rand()%10);
        CAR_spot.setRow(rand()%10);
        CAR_direc = rand()%4 + 1; // 1-5
    }
    cout<<"Carrier(5) "<<CAR_spot.getRow()<<","<<CAR_spot.getColumn()<< " " <<CAR_direc<<endl;

    if(CurrentPlayer==2)
        nextTurn();
    else
        CurrentPlayer++;
}
