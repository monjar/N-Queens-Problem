
#ifndef __BOARD_H
#define __BOARD_H

#include <vector>

#include "cell.h"

class Board { 

	private:

		//Cell<int> **cells;
		//std::vector<std::vector<Cell<int>>> cells;
		std::vector<std::vector<Cell>> cells;

	public:

		const static int EMPTY_CELL;
		const static int QUEEN_CELL;

		Board( const int& );
		//~Board();

		//std::vector<Cell<int>> &operator[]( const int& );
		std::vector<Cell> &operator[]( const int& );

};

#endif

