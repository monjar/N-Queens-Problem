
#ifndef __HILLCLIMBINGMETHOD_H
#define __HILLCLIMBINGMETHOD_H

#include <iostream>

#include "solveMethod.h"

class HillClimbingMethod : public SolveMethod{

	void solve( Game* ) override; 

};

#endif
