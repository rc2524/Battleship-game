#pragma once
#include <iostream>
#include <vector>
#include "Location.h"
#include "Board.h"

#define EMPTY 1
#define HAS_SHIP 2
#define BEEN_SHOT_EMPTY 3
#define BEEN_SHOT_HAS_SHIP 4

class AI {
	public:
	// Constructor
	AI(const int width1=10, const int hight1=10);

	// Destructor
	~AI();
	
	// Update board
	friend std::istream& operator>> (std::istream& in, AI& ai);
	
	// Gets the curent state of the board, ie: where has already been guessed
	// Note: Call before each guess
        void input_status(Board& b);

	// Location of guess
	// Prerequisite: input_status(const Board&) must be called before each guess
	Location guess();

private:
	// ----- Functions -----
	
	// Returns the size of the smallest ship not already destroyed
	int smallestShipLeft() const;
	
	// adds options for guessing
	void add_guess_options();

	// ----- Data Members -----
	static const int num_of_strats_availible = 2;
	enum guessing_strat {
		EVEN_SPACES,
		ODD_SPACES,
		// More if I have time
	};
	int guess_strat;
	
	// Vector of spots to still guess
	std::vector<Location> guess_options;

	// The array of the board
	std::vector< std::vector<int> > board;
	int height0;
	int width0;	
	
	// Number of hits on ships that are not complete sunk
	bool unsunken_ship_hit;
};

