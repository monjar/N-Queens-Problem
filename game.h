
#ifndef __GAME_H
#define __GAME_H

#include <stdlib.h>		//srand(), rand()
#include <time.h>		//time()
#include <vector>		//vector!
#include <algorithm>	//shuffle
#include <random>		//default_random_engine

#include "board.h"
#include "cor.h"

class Game { 

	private:

		Board *board;
		size_t *size;
	
	public:

		Game( const int& );
		~Game();

		void initializeRandomlyInEachColumn();
		void initializeRandomlyInEachRow();
		void initializeRandomly();

		const size_t &getSize() const;

};

#endif
