// Implimentation for the Location class

#include "Location.h"

// Constructor
Location::Location( )	// Default constructor
{
	row = 0;
	column = 0;
}

Location::Location( int nRow, int nColumn )	// Better constructor
{
	row = nRow;
	column = nColumn;
}

Location::Location( const Location& orig )	// Copy constructor
{
	row = orig.getRow();
	column = orig.getColumn();
}
	
Location::~Location( )	// Destructor
{
	// No pointer types, so nothing to do here!
}

int Location::getRow() const	// Accessor for the row
{
	return row;
}

int Location::getColumn() const	// Accessor for the column
{
	return column;
}

void Location::setRow( int nRow )
{
	row = nRow;
}

void Location::setColumn( int nColumn )
{
	column = nColumn;
}

Location& Location::operator= ( const Location& orig )
{
	row = orig.getRow();
	column = orig.getColumn();
}

bool Location::operator== ( const Location& orig )
{
	if (orig.getColumn != column)
		return 0;
	if (orig.getRow != row)
		return 0;
	
	// If we get here, they are equal	
	return 1;
}

bool Location::operator!= ( const Location& orig )
{
	return !(*this == orig);
}