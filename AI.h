#pragma once

class AI {
public:
	AI();  // Constructer

	// Returns the size of the smallest ship, not already destroyed
	int smallestShipLeft(/*stdin*/);

	// Returns ship that needs to be finnished off or -1 if there aren't any
	int unfinishedShip(/*stdin*/);

	// Location of guess
	location Guess();
private:
	// The guessing strategy
	enum {
		spiral_out,
		spiral_in,
		random_unorganized,
		random_only_diag,
		x_subdivide
	};
	int guessingStrat;

	location prev_guess; // This might not be needed or might need to be a list
};
