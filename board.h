
/*
A general class, for every board-related thing you want to do. 
*/

#ifndef __BOARD_H
#define __BOARD_H

#include <iostream>		//cout, for debugging
#include <vector>		//vector
#include <utility>		//pair, make_pair

#include "cell.h"

class Board { 

	protected:

		std::vector<std::vector<Cell*>> cells;		//	All cells are stored here. 

	public:

		Board( const unsigned int&, const unsigned int&, const int& );		//	Gets number of rows, number of columns and the default value for cells.

		std::vector<Cell*> &operator[]( const int& );		//	Just an operator so you can access elements of the board. 

		const std::pair<size_t, size_t> getSize() const;		//	Returns number of rows and number of columns in a pair. 
		const size_t getRowsCount() const;		//	Returns number of rows.
		const size_t getColumnsCount() const;	//	Returns number of columns.

};

#endif

