// Implimentation file for Board Class
// 04 APR 2012

#include "Board.h"
#include "Ship.h"

#define DBG 1

// Overload the output operator
std::ostream& operator<< (std::ostream& out, Board& b)
{	// Output the board
	for (int i = 0; i < b.getBoardSize().getRow(); ++i)
	{
		for (int j = 0; j < b.getBoardSize().getColumn(); ++j)
		{
			Location newLoc(i,j);
			out << b.getSpotValue(newLoc) << " ";
		}
		out << "\n";
	}

	return out;
}

// Constructor
Board::Board()
{
        numOfShips = 0;
	rows = 10;
	columns = 10;
	board_data = new int[100]; // New matrix to hold the spot values. Length = rows * columns
	for (int i = 0; i < 100; ++i)
	{
		board_data[i] = EMPTY;
	}
	head = 0;
}

// Constructor
Board::Board( int height, int width )
{
        numOfShips = 0;
	rows = height;
	columns = width;
	board_data = new int[rows * columns];
	for (int i = 0; i < rows * columns; ++i)
	{
		board_data[i] = EMPTY;
	}
	head = 0;
}

// Copy constructor
Board::Board( const Board& orig )
{
	Location size;
	size = orig.getBoardSize();
	rows = size.getRow();
	columns = size.getColumn();
	board_data = new int[rows * columns];
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			Location loc( i, j );
			board_data[columns * i + j] = orig.getSpotValue( loc ); // Copy the board_data
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
Location Board::getBoardSize() const
{
	Location size( rows, columns );
	return size;
}


// Determines the value of a particular spot
int Board::getSpotValue( Location spot ) const
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


bool Board::placeShip( Ship& newShip, Location spot, int orientation )
{
	if (orientation == NORTH)
	{
		if (spot.getRow() < newShip.getShipLength())
			return 0; // Ship will not fit, not enough vertical room
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
			return 0; // Ship will not fit.
		else
		{
			for (int i = 0; i < newShip.getShipLength(); ++i)
			{
				board_data[columns * (spot.getRow() + i) + spot.getColumn()] = HAS_SHIP;
			}
		}
	}

	else if (orientation == EAST)
	{
		if ((columns - spot.getColumn()) < newShip.getShipLength())
			return 0; // Ship will not fit, not enough horizontal room
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
			return 0; // Ship will not fit
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

	shipNode *newNode = new shipNode();
	newNode->data = myShip;
	newNode->next = head;
	head = newNode;
        numOfShips++;
	return 1;
}

// Overloaded operator= for copying instances of a specific board
Board& Board::operator= ( const Board& orig )
{
	Location size;
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
			board_data[columns * i + j] = orig.getSpotValue( loc ); // Copy the board_data
		}
	}

	// Copy the list of ships and their data
	for (shipNode *cur = head; cur; cur = cur->next)
	{
		this->placeShip( cur->data, cur->data.getLocation(), cur->data.getDirection() );
	}

	return *this;
}

// Overloaded operator== for determining if two boards are equal
bool Board::operator== ( const Board& orig )
{
	// Make sure they are the same size
	if (orig.getBoardSize().getRow() != rows || orig.getBoardSize().getColumn() != columns)
	{
		return 0; // They are not equal if they are not the same size
	}

	// Make sure they have the same ship layout
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			Location temp( i, j );
			if (this->getSpotValue( temp ) != orig.getSpotValue( temp ))
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
