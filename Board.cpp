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
	Location size();
	size = orig.getBoardSize();
	rows = size.getRow();
	columns = size.getColumn();
	board_data = new int[rows * columns];
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			Location loc( i, j );
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
	Location size( rows, columns );
	return size;
}


// Determines the value of a particular spot
int getSpotValue( Location spot )
{
	return board_data[columns * spot.getRow() + spot.getColumn()];
}

// Determiens whether or not a ship is present on the particular spot that has been fired upon
bool Board::recieveShot( Location spot )
{
	int spotStat = board_data[columns * spot.getRow() + spot.getColumn()];
	if (spotStat == HAS_SHIP)
	{
		board_data[columns * spot.getRow() + spot.getColumn()] = BEEN_SHOT_HAS_SHIP;
		return 1;
	}
	else if (spotStat == EMPTY)
	{
		board_data[columns * spot.getRow() + spot.getColumn()] = BEEN_SHOT_EMPTY;
		return 0;
	}
	else
	{
		return 0;
	}
}

<<<<<<< HEAD
bool Board::placeShip( Ship& newShip, Location spot, int orientation )
=======
// Places a ship at a particular spot with a particular orientation
bool Board::placeShip( Ship& newShip, Location spot, shipDirection orientation )
>>>>>>> remotes/zergler/master
{
	if (orientation == NORTH)
	{
		if (spot.getRow() < newShip.getShipLength())
			return 0;	// Ship will not fit, not enough vertical room
		else
		{
			for (int i = 0; i < newShip.getShipLength(); ++i)
			{
				board_data[columns * (spot.getRow() - i) + spot.getColumn()] = HAS_SHIP;
			}
		}
	}

	else if (orientation == SOUTH)
	{
		if ((rows - spot.getRow()) < newShip.getShipLength())
			return 0;	// Ship will not fit.
		else
		{
			for (int i = 0; i < newShip.getShipLength(); ++i)
			{
				board_data[columns * (spot.getRow() + i) + spot.getColumn()] = HAS_SHIP;
			}
			newShip.setLocation( spot );
			newShip.setDirection( orientation );
		}
	}

	else if (orientation == EAST)
	{
		if ((columns - spot.getColumn()) < newShip.getShipLength())
			return 0;	// Ship will not fit, not enough horizontal room
		else
		{
			for (int i = 0; i < newShip.getShipLength(); ++i)
			{
				board_data[columns * spot.getRow() + spot.getColumn() + i] = HAS_SHIP;
			}
		}
	}

	else if (orientation == WEST)
	{
		if (spot.getColumn() < newShip.getShipLength())
			return 0;	// Ship will not fit
		else
		{
			for (int i = 0; i < newShip.getShipLength(); ++i)
			{
				board_data[columns * spot.getRow() + spot.getColumn() - i] = HAS_SHIP;
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
	Location size();
	size = orig.getBoardSize();
	rows = size.getRow();
	columns = size.getColumn();
	delete board_data;
	delete head;
	board_data = new int[rows * columns];
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			Location loc( i, j );
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
	if (orig.getBoardSize().getRows() != rows || orig.getBoardSize().getColumns() != columns)
	{
		return 0;	// They are not equal if they are not the same size
	}

	// Make sure they have the same ship layout
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			if (this->getSpotValue( Location( i, j )) != orig.getSpotValue( Location( i, j ) ))
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
