#include "battlelocalgame.h"
#include "Board.h"
#include "ui_battlelocalgame.h"

BattleLocalGame::BattleLocalGame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BattleLocalGame)
{
    ui->setupUi(this);
    Player1Board = new Board(10,10);
    Player2Board = new Board(10,10);
    connect(ui->RandomButton, SIGNAL(pressed()), this, SLOT(createRandomBoard()));
    connect(ui->CustomButton, SIGNAL(pressed()), this, SLOT(createCustomBoard()));
     srand(seed);
}

BattleLocalGame::~BattleLocalGame()
{
    delete ui;
}

void BattleLocalGame::createCustomBoard(){
    //Dialog box for each location/ship/direction
    //update board
}

void BattleLocalGame::createRandomBoard(){
    Board* boardIn;
    if(CurrentPlayer == 1){
        boardIn = Player1Board;
    }
    else{
        boardIn = Player2Board;
    }

    Location PT_spot(4,rand()%10);
    Location DES_spot(4,rand()%10);
    Location SUB_spot(4,rand()%10);
    Location BAT_spot(4,rand()%10);
    Location CAR_spot(4,rand()%10);

    int PT_direc(rand()%4 + 1);
    int DES_direc(rand()%4 + 1);
    int SUB_direc(rand()%4 + 1);
    int BAT_direc(rand()%4 + 1);
    int CAR_direc(rand()%4 + 1);

    // rand()%10; // number 0-9
    //do boundary checking
    //Place Patrol Boat
    Ship Minow( PT_BOAT );
    while(!boardIn->placeShip(Minow, PT_spot, PT_direc)){
        PT_spot.setColumn(rand()%10);
        PT_spot.setRow(rand()%10);
        PT_direc = rand()%4 + 1; // 1-5
    }
    //while(!boardIn->placeShip(Minow, PT_spot, PT_direc));
    cout<<"Patrol(2) "<<PT_spot.getRow()<<","<<PT_spot.getColumn()
        << " " <<PT_direc<<endl;

    //Place Destroyer
    Ship Farragut(DESTROYER);
    while(!boardIn->placeShip(Farragut, DES_spot, DES_direc)){
        DES_spot.setColumn(rand()%10);
        DES_spot.setRow(rand()%10);
        DES_direc = rand()%4 + 1; // 1-5
    }
   // boardIn->placeShip(Farragut, DES_spot, DES_direc);
    cout<<"Destroyer(3) "<<DES_spot.getRow()<<","<<DES_spot.getColumn()
        << " " <<DES_direc<<endl;


    //Place Submarine
    Ship Virginia(SUBMARINE);
     while(!boardIn->placeShip(Virginia, SUB_spot, SUB_direc)){
        SUB_spot.setColumn(rand()%10);
        SUB_spot.setRow(rand()%10);
        SUB_direc = rand()%4 + 1; // 1-5
     }
    //while(!boardIn->placeShip(Virginia, SUB_spot, SUB_direc));
    cout<<"Submarine(3) "<<SUB_spot.getRow()<<","<<SUB_spot.getColumn()
        << " " <<SUB_direc<<endl;

    //Place Battleship
    Ship Iowa(BATTLESHIP);
    while(!boardIn->placeShip(Iowa, BAT_spot, BAT_direc)){
        BAT_spot.setColumn(rand()%10);
        BAT_spot.setRow(rand()%10);
        BAT_direc = rand()%4 + 1; // 1-5
    }
    //while(!boardIn->placeShip(Iowa, BAT_spot, BAT_direc));
    cout<<"BattleShip(4) "<<BAT_spot.getRow()<<","<<BAT_spot.getColumn()
        << " " <<BAT_direc<<endl;

    //Place Carrier
    Ship Enterprise( CARRIER );
    while(!boardIn->placeShip(Enterprise, CAR_spot, CAR_direc)){
        CAR_spot.setColumn(rand()%10);
        CAR_spot.setRow(rand()%10);
        CAR_direc = rand()%4 + 1; // 1-5
}
    cout<<"Carrier(5) "<<CAR_spot.getRow()<<","<<CAR_spot.getColumn()
        << " " <<CAR_direc<<endl;

    cout<<*boardIn;
    QString str;

    for (int i = 0; i < (boardIn->getBoardSize().getRow()+1); ++i) {
        if(i==0){
           testOut.append("   ");
        }
        else{
            str.setNum((i-1),10);
            testOut.append(str);
        }
        testOut.append("  ");
        for (int j = 0; j < boardIn->getBoardSize().getColumn(); ++j)
        {
            if(i==0){
                str.setNum(j,10);
                testOut.append(str);
                testOut.append(" ");
            }
            else{
                Location newLoc(i-1,j);
                int val = boardIn->getSpotValue(newLoc);
                str.setNum(val,10);
                testOut.append(str);
                testOut.append(" ");
            }
        }
            testOut.append("\n");
    }
    ui->PlayerGameBoard->setText(testOut);
}
