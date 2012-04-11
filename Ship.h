// Header for Ship class
// 04 APR 2012

#pragma once

#include "Board.h"
#include "Location.h"

// Defines for Ship Type
#define	PT_BOAT 1
#define	DESTROYER 2
#define	SUBMARINE 3
#define	BATTLESHIP 4
#define	CARRIER 5

// Defines for direction
#define	NORTH 1
#define	SOUTH 2 
#define	EAST 3
#define	WEST 4

// Defines for ship length
#define PT_LENGTH 2
#define DESTROYER_LENGTH 3
#define SUBMARINE_LENGTH 3
#define BATTLESHIP_LENGTH 4
#define CARRIER_LENGTH 5

class Ship
{
public:
	Ship();		// Default constructor
	Ship( int Id );		// Constructor with shipType
	Ship( const Ship& orig);	// Copy constructor

	// Overload operators
	Ship& operator= ( const Ship& orig );	// Assignment operator
	bool operator== ( const Ship& orig );
	bool operator!= ( const Ship& orig );

	// Public member functions

	// Processes the ship getting hit.
	// Updates ship status based on new hit.
	// Return 0 if ship is still floating, 1 if ship is sunk
	// loc is the number of spaces from the aft of the ship to the spot that was hit.
	bool recieveHit( int loc );

	// Returns the number of spot on the ship that have not been hit.  Thus, 0 means the ship is sunk.
	int getStatus() const;

	// Return the location of the aft of the ship
	Location getLocation() const;

	// Return the ship type
	int getShipType() const;

	// Set the ship location
	void setLocation( Location newLoc );

	// Return ship Length
	int getShipLength() const;

	// Return the ship direction
	int getDirection() const;

	// Set the ship direction
	void setDirection( int newDir );
	
	// Return status of a single spot on ship
	int getSpotStatus( int location ) const;

private:
	Location myLoc;	// Location of aft of ship
	int myId;
	int myLength;	// Based on shipType
	int *myParts;	// Hold the status of each part of the ship, this is an array of length, myLength
	bool amISunk;
	int facing;	// The direction the ship is facing.
};
