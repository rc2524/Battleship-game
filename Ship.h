// Header for Ship class
// 04 APR 2012

#pragma once

#include "Board.h"

enum shipDirection
{
	north,
	south,
	east,
	west
};

enum shipType
{
	PT_Boat,
	Destroyer,
	Submarine,
	Battleship,
	Carrier
};

class Ship
{
public:
	Ship();		// Default constructor
	Ship( shipType Id );		// Constructor with shipType
	Ship( const Ship& orig);	// Copy constructor

	// Overload operators
	Ship& operator= ( const Ship& orig );	// Assignment operator
	bool operator== ( const Ship& orig );
	bool operator!= ( const Ship& orig );

	// Public member functions

	// Processes the ship getting hit.
	// Updates ship status based on new hit.
	// Return 0 if ship is still floating, 1 if ship is sunk
	// location is the number of spaces from the aft of the ship to the spot that was hit.
	bool recieveHit( int location );

	// Returns the number of spot on the ship that have not been hit.  Thus, 0 means the ship is sunk.
	int getStatus();

	// Return the location of the aft of the ship
	Location getLocation();

	// Return the ship type
	shipType getShipType();

	// Set the ship location
	void setLocation( Location newLoc );

	// Return ship Length
	int getShipLength();

	// Return the ship direction
	shipDirection getDirection();

	// Set the ship direction
	void setDirection( shipDirection newDir );

private:
	Location whereAmI;	// Board location of the aft of the ship
	shipType myId;
	int myLength;	// Based on shipType
	int *myParts;	// Hold the status of each part of the ship, this is an array of length, myLength
	bool amISunk;
	shipDirection facing;	// The direction the ship is facing.
};
