#pragma once

namespace BattleshipAI {

	// The guessing strategies
	enum {
		spiral_out,
		spiral_in,
		random_unorganized,
		random_only_diag,
		x_subdivide
	};

	class AI {
	public:
		AI(int guess_strat = random_only_diag);  // Constructer

		// Returns the size of the smallest ship not already destroyed
		int smallestShipLeft(/*stdin*/);

		// Returns ship that needs to be finnished off or -1 if there aren't any
		int unfinishedShip(/*stdin*/);

		// Location of guess
		location Guess();
	private:
		// stores which strategy is being used
		int guessingStrat;

		location prev_guess; // This might not be needed or might need to be a list
	};
}
