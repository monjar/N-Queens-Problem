
#ifndef __HILLCLIMBINGMETHOD_H
#define __HILLCLIMBINGMETHOD_H

#include "solveMethod.h"

class HillClimbingMethod : public SolveMethod{

	public:

		void solve( Game* ) override; 

};

#endif
