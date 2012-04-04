// Header for Ship class
// 04 APR 2012

#pragma once

enum shipDirection
{
	north,
	south,
	east,
	west
};

class Ship
{
public:
	Ship();		// Default constructor
	Ship( shipType Id );		// Constructor with shipType
	Ship( const Ship& orig);	// Copy constructor

	// Overload operators
	Ship& operator= (const Ship& orig );	// Assignment operator
	bool operator== (const Ship& orig );
	bool operator!= (const Ship& orig );

private:
	
};
