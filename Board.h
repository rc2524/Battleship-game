// Header file for the board of the Battleship-game
// 04 APR 2012

#pragma once

#include "Ship.h"

enum spotStatus
{
	empty,
	hasShip,
	beenShotEmpty,
	beenShotHasShip
};

struct Location
{
	int x;
	int y;
};

class Board
{
public:
	Board( );			// Default constructor
	Board( int height, int width );	// For creating different sized boards
	Board( Board& orig )		// Copy constructor

	~Board();			// Destructor

	// Process getting shot at
	// Will return 0 if miss and 1 if hit.
	bool recieveShot( Location spot );

	// Gets the spot value (empty, hasShip, beenShotEmpty, beenShotHasShip, etc.)
	spotStaus getSpotValue( Location spot );

	// Places a ship on the board
	// Args:
	//  Ship newShip : The ship to be placed.  Its position will be set to the provided one if the place is successful. Type from ship.h
	//  int x	 : The x coordinate of the ship
	//  int y	 : The y corrdinate of the ship
	//  shipDirection orientation : The orientation of the ship, type from ship.h
	// Returns:
	//  bool : 0 if place unsuccessful, 1 if place successful
	bool placeShip( Ship& newShip, Location spot, shipDirection orientation );

	// Overload operators
	Board& operator= ( const Board& orig );
	bool operator!= ( const Board& orig );
	bool operator== ( const Board& orig );

private:
	int rows, columns;
	int *board_data;
};
