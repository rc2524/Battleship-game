#include <iostream>
#include "Board.h"
#include "Ship.h"
#include "Location.h"

using namespace std;

const bool DEBUG = 1;

int main()
{
	cout << "This is a test of the Board and Ship classes." << endl;
	cout << "\n";
	
	if (DEBUG)
		cout << "Defining newBoard as type Board." << endl;
	
	Board newBoard( 10, 10 );
	
	if (DEBUG)
	{
		cout << "newBoard successfully defined." << endl;
		cout << "Defining Enterprise and Minow as type Ship." << endl;
	}

	Ship Enterprise( CARRIER );
	Ship Minow( PT_BOAT );
	
	if (DEBUG)
	{
		cout << "Enterprise and Minow successfully defined." << endl;
		cout << "Running Enterprise.getShipType() " << endl;
	}
	
	int x = Enterprise.getShipType( );
	cout << "Enterprise ship type (should be 5) : " << x << endl; 
	
	if (DEBUG)
		cout << "Defining spot as type Location with values (0,0)" << endl;
	
	Location spot(0,0);
	
	if (DEBUG)
	{
		cout << "Spot successfully defined." << endl;
		cout << "Now running placeShip on newBoard using Enterprise as ship." << endl;
	}

	newBoard.placeShip( Enterprise, spot, EAST );
	if (DEBUG)
	{
		cout << "Enterprise successfully place." << endl;
	}
	cout << "Spot value at (0,0) = " << newBoard.getSpotValue( spot ) << endl;
	
	spot.setRow( 5 );
	spot.setColumn( 3 );
	newBoard.placeShip( Minow, spot, WEST);

	cout << "Spot value at (5,3) = " << newBoard.getSpotValue( spot ) << endl;

	spot.setRow( 9 );
	spot.setColumn( 9 );

	cout << "Spot value at (9,9) = " << newBoard.getSpotValue( spot ) << endl;

	return 0;
}
