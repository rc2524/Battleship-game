// Header file for the board of the Battleship-game
// 04 APR 2012

#pragma once

#include "Ship.h"
#include "Location.h"

#define	EMPTY 1
#define	HAS_SHIP 2
#define	BEEN_SHOT_EMPTY 3
#define	BEEN_SHOT_HAS_SHIP 4


struct shipNode
{
	Ship data;
	shipNode *next;
};

class Board
{
public:

	Board( );			// Default constructor
	Board( int height, int width );	// For creating different sized boards
	Board( Board& orig );		// Copy constructor

	~Board();			// Destructor

	// Process getting shot at
	// Will return 0 if miss and 1 if hit.
	bool recieveShot( Location spot );

	// Gets the spot value (empty, hasShip, beenShotEmpty, beenShotHasShip, etc.)
	int getSpotValue( Location spot );

	// Returns a location where x = rows and y = columns.  This is the bottom-right corner of the board.
	Location getBoardSize();

	// Places a ship on the board
	// Args:
	//  Ship newShip : The ship to be placed.  Its position will be set to the provided one if the place is successful. Type from ship.h
	//  int x	 : The x coordinate of the ship
	//  int y	 : The y corrdinate of the ship
	//  shipDirection orientation : The orientation of the ship, type from ship.h
	// Returns:
	//  bool : 0 if place unsuccessful, 1 if place successful
	bool placeShip( Ship& newShip, Location spot, int orientation );

	// Overload operators
	Board& operator= ( const Board& orig );
	bool operator!= ( const Board& orig );
	bool operator== ( const Board& orig );

private:
	int rows, columns;
	int *board_data;
	shipNode *head;
};
