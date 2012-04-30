#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "AI.h"
//#include "Location.h"

AI::AI(const int width1, const int height1) :
  height0(height1),
  width0(height1),
  unsunken_hits(0)
{
	// Initialize the board to keep track of guesses
	board.resize(height0, std::vector<int>(width0, EMPTY) );
	
	// Set all the ships to still alive
	for (int i = 0; i<5; ++i) {
		ships_left[i] = i+1;
	}
	
	// Random seed
	std::srand(std::time(0));
	
	// Pick a strategy
	guess_strat = rand()%num_of_strats_availible;
}


AI::~AI() {

}

int AI::smallestShipLeft() const {
	int smallest = 5;

	for (int i = 0; i < 5; ++i) {
		smallest = (ships_left[i] < smallest ? ships_left[i] : smallest);
	}

	return smallest;
}

std::istream& operator>> (std::istream& in, AI& ai) {
	for (int i = 0; i < ai.height0; ++i) {
		for (int j = 0; j < ai.width0; ++j) {
			// Input the status of the location
			in >> ai.board[i][j];
			
			// Add to the array of guessable spaces
			if (ai.board[i][j] == EMPTY) {
				if (
					(ai.guess_strat == ai.EVEN_SPACES && ((i+j)%2 == 0)) ||
					(ai.guess_strat == ai.ODD_SPACES  && ((i+j)%2 == 1))
					)
				{
					Location empty_space(i,j);
					ai.guess_options.push_back(empty_space);
				}
			}
		}
	}
	
	return in;
}



Location AI::guess() {
	// If there is an unfinished ship, attempt to finish it off.
	/* WORK ON THIS AFTER WAY INPUT IF SHIPS ARE DESTROYED */
	if (unsunken_hits) {
		// return statment in here
	}
	
	// If there is no unfinished ship, just guess
	std::random_shuffle ( guess_options.begin(), guess_options.end() );
	
	return guess_options.back();
}
