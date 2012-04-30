// Header file for location class
// 09 APR 2012

#pragma once

class Location
{
public:
	// Constructor
	Location( );		// Default constructor
	Location( int nRow, int nColumn );	// Better constructor
	Location( const Location& orig );		// Copy constructor
	
	~Location( );	// Destructor
	
	int getRow() const;	// Accessor for the row
	int getColumn() const;	// Accessor for the column
	
	void setRow( int nRow);		// Set the row
	void setColumn( int nColumn);	// Set the column
	
	Location& operator= ( const Location& orig );	// Overload '=' operator
	
	bool operator== ( const Location& orig );
	bool operator!= ( const Location& orig );
	
private:
	int row;	// Holds the row
	int column;	// Holds the column	
};
