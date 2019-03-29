
#include <iostream>

#include "game.h"
#include "hillclimbingmethod.h"
#include "solver.h"

int main () {

	Game *game = new Game( 8 );
	game->initializeRandomly();

	// delete game; 

	SolveMethod *method = new HillClimbingMethod;
	Solver *solver = new Solver( method );
	solver->solve( game );

	return 0;

}
