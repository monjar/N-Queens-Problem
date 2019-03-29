
#ifndef __SOLVER_H
#define __SOLVER_H

#include "game.h"
#include "solveMethod.h"

class Solver { 

	private:

		SolveMethod *solveMethod;

	public:

		Solver( SolveMethod* );

		void solve( Game* );

};

#endif

