#include "AI.h"
//#include "Location.h"
#include <iostream>

int main() {
	// Initialize AI
	AI AI_player;
	
	// input board status
	std::cin >> AI_player;
	
	Location guess1;
	
	for (int i = 5; i; --i) {
		guess1 = AI_player.guess();
		std::cout << guess1.getRow() << ", " << guess1.getColumn() << std::endl;
	}
	
	return 0;
}
