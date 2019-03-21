
#ifndef __BOARD_H
#define __BOARD_H

#include <iostream>		//cout, for debugging
#include <vector>		//vector
#include <utility>		//pair, make_pair

#include "cell.h"

class Board { 

	protected:

		std::vector<std::vector<Cell*>> cells;

	public:

		Board( const unsigned int&, const unsigned int&, const int& );

		std::vector<Cell*> &operator[]( const int& );

		const std::pair<size_t, size_t> getSize() const;
		const size_t getRowsCount() const;
		const size_t getColumnsCount() const;

};

#endif

