// Implimentation file for Ship class
// 06 APR 2012

#include "Board.h"
#include "Ship.h"

// Constructors
Ship::Ship()	// Default  constructor will create a PT boat located at the top left of the screen facing to the right.
{
	Location newLoc( 0, 0 );
	myLoc = newLoc;
	myId = PT_BOAT;
	myLength = 2;
	myParts = new int[2];
	myParts[0] = 0;
	myParts[1] = 0;
	amISunk = 0;
	facing = EAST;	// I choose this so the ship can fit on the board with its current stats
}

Ship::Ship( int Id )
{
	Location newLoc( 0, 0 );
	myLoc = newLoc;
	myId = Id;

	if (myId == PT_BOAT)
		myLength = PT_LENGTH;
	else if(myId == DESTROYER)
		myLength = DESTROYER_LENGTH;
	else if(myId == SUBMARINE)
		myLength = SUBMARINE_LENGTH;
	else if(myId == BATTLESHIP)
		myLength = BATTLESHIP_LENGTH;
	else if(myId == CARRIER)
		myLength = CARRIER_LENGTH;
	else
	{
		// Ideally we never get here, but better safe than sorry.
		myLength = 1;	// Note: This is an error code as no ship should have a length of 1
	}

	myParts = new int[myLength];
	for (int i = 0; i < myLength; ++i)
		myParts[i] = 0;

	amISunk = 0;
	facing = EAST;
}

Ship::Ship( const Ship& orig )
{
	myLoc = orig.getLocation();
	myId = orig.getShipType();
	myLength = orig.getShipLength();
	myParts = new int[myLength];
	for (int i = 0; i < myLength; ++i)
		myParts[i] = orig.getSpotStatus(i);
	amISunk = !(orig.getStatus());
	facing = orig.getDirection();
}

Ship& Ship::operator= ( const Ship& orig )
{
	myLoc = orig.getLocation();
	myId = orig.getShipType();
	myLength = orig.getShipLength();
	delete myParts;
	myParts = new int[myLength];
	for (int i = 0; i < myLength; ++i)
		myParts[i] = orig.getSpotStatus(i);
	amISunk = !(orig.getStatus());
	facing = orig.getDirection();

	return *this;
}

bool Ship::operator== ( const Ship& orig )
{
	if (myLoc != orig.getLocation())
		return 0;
	if (myId != orig.getShipType())
		return 0;
	if (myLength != orig.getShipLength())
		return 0;
	for (int i = 0; i < myLength; ++i)
		if (myParts[i] != getSpotStatus(i))
			return 0;
	if (amISunk != !(orig.getStatus()))
		return 0;
	if (facing != orig.getDirection())
		return 0;

	// If it gets this far then they are equal
	return 1;
}

bool Ship::operator!= ( const Ship& orig )
{
	return !(*this == orig);
}

int Ship::getStatus() const
{
	int count = 0;
	for (int i = 0; i < myLength; ++i)
		if (myParts[i] == 0)
			count++;

	return count;
}

Location Ship::getLocation() const
{
	return myLoc;
}

int Ship::getShipType() const
{
	return myId;
}

void Ship::setLocation( Location newLoc )
{
	myLoc = newLoc;
}

int Ship::getShipLength() const
{
	return myLength;
}

int Ship::getDirection() const
{
	return facing;
}

void Ship::setDirection( int newDir )
{
	facing = newDir;
}

bool Ship::recieveHit( int loc )
{
	myParts[loc] = 1;
	if (getStatus())
	{
		return 0;
	}
	else
	{
		amISunk = 1;
		return 1;
	}
}

int Ship::getSpotStatus( int loc ) const
{
	return myParts[loc];
}
