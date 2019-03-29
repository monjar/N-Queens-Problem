
/*
The main purpose of this class is to have the game board inside it. It can do some stuff on it too. 
*/

#ifndef __GAME_H
#define __GAME_H

#include <iostream>		//cout, for debugging
#include <stdlib.h>		//srand(), rand()
#include <time.h>		//time()
#include <vector>		//vector!
#include <algorithm>	//shuffle
#include <random>		//default_random_engine

#include "cor.h"
#include "nqueenboard.h"
// #include "solveMethod.h"

class SolveMethod;

class Game { 

	friend class SolveMethod;

	private:

		//Board *board;
		NQueenBoard *board;
	
	public:

		Game( const int& );
		Game( const int&, const int&, const unsigned int& );
		~Game();

		void initializeRandomlyInEachColumn();
		void initializeRandomlyInEachRow();
		void initializeRandomly();

		NQueenBoard getBoard() const;

};

#endif
