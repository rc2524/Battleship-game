// Header for Ship class
// 04 APR 2012

#pragma once

#include "Board.h"

// Defines for ship length
#define PT_LENGTH 2
#define DESTROYER_LENGTH 3
#define SUBMARINE_LENGTH 3
#define BATTLESHIP_LENGTH 4
#define CARRIER_LENGTH 5

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

	// Return status of a single spot on ship
	int getSpotStatus( int location );

private:
	Location whereAmI;	// Board location of the aft of the ship
	shipType myId;
	int myLength;	// Based on shipType
	int *myParts;	// Hold the status of each part of the ship, this is an array of length, myLength.  0 is ok, 1 is hit
	bool amISunk;
	shipDirection facing;	// The direction the ship is facing.
};
