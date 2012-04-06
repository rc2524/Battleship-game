// Implimentation file for Board Class
// 04 APR 2012

#include "Board.h"
#include "Ship.h"

// Constructor
Board::Board()
{
	rows = 10;
	columns = 10;
	board_data = new int[100];	// New matrix to hold the spot values. Length = rows * columns
	head = 0;
}

// Constructor
Board::Board( int height, int width )
{
	rows = height;
	columns = width;
	board_data = new int[rows * columns];
	head = 0;
}

// Copy constructor
Board::Board( const Board& orig )
{
	Location size;
	size = orig.getBoardSize();
	rows = size.row;
	columns = size.column;
	board_data = new int[rows * columns];
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			Location loc;
			loc.row = i;
			loc.column = j;
			board_data[columns * i + j] = orig.getSpotValue( loc );	// Copy the board_data
		}
	}

	// Copy the list of ships and their data
	for (shipNode *cur = head; cur; cur = cur->next)
	{
		this->placeShip( cur->data, cur->data.getLocation(), cur->data.getDirection() );
	}
}

// Destructor
Board::~Board()
{
	delete board_data;
	delete head;
}

// Determines the size of the board
Location Board::getBoardSize()
{
	Location size;
	size.row = rows;
	size.column = columns;
	return size;
}

// Determines the value of a particular spot
spotStatus getSpotValue( Location spot )
{
	return board_data[columns * spot.row + spot.column];
}

// Determiens whether or not a ship is present on the particular spot that has been fired upon
bool Board::recieveShot( Location spot )
{
	int spotStat = board_data[columns * spot.row + spot.column];
	if (spotStat == spotStatus.hasShip)
	{
		board_data[columns * spot.row + spot.column] = spotStatus.beenShotHasShip;
		return 1;
	}
	else if (spotStat == spotStatus.empty)
	{
		board_data[columns * spot.row + spot.column] = spotStatus.beenShotEmpty;
		return 0;
	}
	else
	{
		return 0;
	}
}

// Places a ship at a particular spot with a particular orientation
bool Board::placeShip( Ship& newShip, Location spot, shipDirection orientation )
{
	if (orientation == shipDirection.north)
	{
		if (spot.row < newShip.getShipLength())
			return 0;	// Ship will not fit, not enough vertical room
		else
		{
			for (int i = 0; i < newShip.getShipLength(); ++i)
			{
				board_data[columns * (spot.row - i) + spot.column] = spotStatus.hasShip;
			}
		}
	}

	else if (orientation == shipDirection.south)
	{
		if ((rows - spot.row) < newShip.getShipLength())
			return 0;	// Ship will not fit.
		else
		{
			for (int i = 0; i < newShip.getShipLength(); ++i)
			{
				board_data[columns * (spot.row + i) + spot.column] = spotStatus.hasShip;
			}
			newShip.setLocation( spot );
			newShip.setDirection( orientation );
		}
	}

	else if (orientation == shipDirection.east)
	{
		if ((columns - spot.column) < newShip.getShipLength())
			return 0;	// Ship will not fit, not enough horizontal room
		else
		{
			for (int i = 0; i < newShip.getShipLength(); ++i)
			{
				board_data[columns * spot.row + spot.column + i] = spotStatus.hasShip;
			}
		}
	}

	else if (orientation == shipDirection.west)
	{
		if (spot.column < newShip.getShipLength())
			return 0;	// Ship will not fit
		else
		{
			for (int i = 0; i < newShip.getShipLength(); ++i)
			{
				board_data[columns * spot.row + spot.column - i] = spotStatus.hasShip;
			}
		}
	}

	// Now add the ship to our ship list
	Ship myShip = newShip;
	myShip.setLocation( spot );
	myShip.setDirection( orientation );

	shipNode *newNode;
	newNode->data = myShip;
	newNode->next = head;
	head = newNode;
	return 1;
}

// Overloaded operator= for copying instances of a specific board
Board& Board::operator= ( const Board& orig )
{
	Location size;
	size = orig.getBoardSize();
	rows = size.row;
	columns = size.column;
	delete board_data;
	delete head;
	board_data = new int[rows * columns];
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			Location loc;
			loc.row = i;
			loc.column = j;
			board_data[columns * i + j] = orig.getSpotValue( loc );	// Copy the board_data
		}
	}

	// Copy the list of ships and their data
	for (shipNode *cur = head; cur; cur = cur->next)
	{
		this->placeShip( cur->data, cur->data.getLocation(), cur->data.getDirection() );
	}
}

// Overloaded operator== for determining if two boards are equal
bool Board::operator== ( const Board& orig )
{
	// Make sure they are the same size
	if (orig.rows != rows || orig.columns != columns)
	{
		return 0;	// They are not equal if they are not the same size
	}

	// Make sure they have the same ship layout
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			if (this->getSpotValue( i, j ) != orig.getSpotValue( i, j ))
				return 0;

		}
	}

	// If we get to here, then they are equal
	return 1;
}
// Overloaded operator!= for determining if two boards are not equal
bool Board::operator!= ( const Board& orig )
{
	return !(*this == orig);
}
