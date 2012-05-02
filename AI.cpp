#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "AI.h"
#include "Location.h"
#include "Board.h"

using namespace std;
AI::AI(const int width1, const int height1) :
  height0(height1),
  width0(height1),
  unsunken_ship_hit(false)
{
	// Initialize the board to keep track of guesses
	board.resize(height0, std::vector<int>(width0, EMPTY) );

	// Random seed
	std::srand(std::time(0));
	// Pick a strategy
	guess_strat = rand()%num_of_strats_availible;
}


AI::~AI() {

}

std::istream& operator>> (std::istream& in, AI& ai) {
	// Input board data
	for (int i = 0; i < ai.height0; ++i) {
		for (int j = 0; j < ai.width0; ++j) {
			// Input the status of the location
			in >> ai.board[i][j];
			if (ai.board[i][j] == HAS_SHIP)
				ai.board[i][j] = EMPTY;		// Forget where ships are


		}
	}


	// Input ship data and mark all completely sunken ships
	long unsigned int p;
	in >> p;
	for (const shipNode* pShip = (shipNode*)p; pShip; pShip = pShip->next) {
		if ( pShip->data.getStatus() == 0 ) { // Ship is sunk
			// Mark location of sunken ships
			int ship_row = pShip->data.getLocation().getRow();
			int ship_column = pShip->data.getLocation().getColumn();
			for (int n; n < pShip->data.getShipLength(); ++n) {
				switch (pShip->data.getDirection()) { 
				  case NORTH:
				  	ai.board[ship_row + n][ship_column] = 2;
				  	break;
				  case SOUTH:
					ai.board[ship_row - n][ship_column] = 2;
					break;
				  case EAST:
				  	ai.board[ship_row][ship_column + n] = 2;
				  	break;
				  case WEST:
					ai.board[ship_row][ship_column - n] = 2;
					break;
				}
			}
		}	
	}

	return in;
}

void AI::input_status(Board& b) {
	// Input board data
	for (int i = 0; i < height0; ++i) {
                for (int j = 0; j < width0; ++j) {
			// Input the status of the location
                        Location spot(i,j);
			board[i][j] = b.getSpotValue(spot);
			if (board[i][j] == HAS_SHIP)
				board[i][j] = EMPTY;		// Forget where ships are
		}
	}


	// Input ship data and mark all completely sunken ships
        shipNode* pShip = b.getShipLinkedList();
	for (; pShip; pShip = pShip->next) {
		if ( pShip->data.getStatus() == 0 ) { // Ship is sunk
			// Mark location of sunken ships
			int ship_row = pShip->data.getLocation().getRow();
			int ship_column = pShip->data.getLocation().getColumn();
			for (int n; n < pShip->data.getShipLength(); ++n) {
				switch (pShip->data.getDirection()) { 
				  case NORTH:
				  	board[ship_row + n][ship_column] = 2;
				  	break;
				  case SOUTH:
					board[ship_row - n][ship_column] = 2;
					break;
				  case EAST:
				  	board[ship_row][ship_column + n] = 2;
				  	break;
				  case WEST:
					board[ship_row][ship_column - n] = 2;
					break;
				}
			}
		}	
	}
}

void AI::add_guess_options() {
	unsunken_ship_hit = false;
	guess_options.clear();

        // Look for an unfinished ship, if there is one, guess around it.
        for (int i=0; i<height0; ++i) {
                for (int j=0; j<width0; ++j) {

			if (board[i][j] == BEEN_SHOT_HAS_SHIP) {
				unsunken_ship_hit = true;

				// Add 4 spots around hit if within the board
				if (i+1 < height0) {
					if (board[i+1][j] == EMPTY) {
						Location empty_space(i+1,j);
						guess_options.push_back(empty_space);
					}
				}
				if (i-1 >= 0) {
					if (board[i-1][j] == EMPTY) {
						Location empty_space(i-1,j);
						guess_options.push_back(empty_space);
					}
				}
				if (j+1 < width0) {
					if (board[i][j+1] == EMPTY) {
						Location empty_space(i,j+1);
						guess_options.push_back(empty_space);
					}
				}
				if (j-1 >=0) {
					if (board[i][j-1] == EMPTY) {
						Location empty_space(i,j-1);
						guess_options.push_back(empty_space);
					}
				}

			}
		}
	}

	// If no unfinished ship guess randomly in a chekerboard pattern
        if (!unsunken_ship_hit) {
                for (int i=0; i<height0; ++i) {
                        for (int j=0; j<width0; ++j) {
				// Add spaces in a checkerboard pattern to guessable spaces
                                if (board[i][j] == EMPTY) {
                                        if (
						(guess_strat == EVEN_SPACES && ((i+j)%2 == 0)) ||
						(guess_strat == ODD_SPACES  && ((i+j)%2 == 1))
						)
					{
						Location empty_space(i,j);
						guess_options.push_back(empty_space);
					}
				}
			}
		}
	}
}

Location AI::guess() {	
	// Add all the good guessing options to a vector
        add_guess_options();

	// Select a random choice from the list of good guesses
	std::random_shuffle ( guess_options.begin(), guess_options.end() );
        return guess_options.front();
}
