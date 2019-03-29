
/*
The purpose of this class is to have a general board. It specializes the board for N Queens problem with adding some extra features to it. 
*/

#ifndef __NQUEENBOARD_H
#define __NQUEENBOARD_H

#include <vector>		//vector

#include "board.h"
#include "cor.h"

class NQueenBoard : public Board{ 

	private:

		const unsigned int queensCount;		//	Number of queens

	public:

		const static int EMPTY_CELL;		//
		const static int QUEEN_CELL;		//	To prevent hard code, I created these two variables. 

		std::vector<Cor> emptyCellsCor;		//	This vector contains cordinates of all empty cells. it can be useful later. 
		std::vector<Cor> queenCellsCor;		//	This vector contains cordinates of all queen cells. it can be useful later. 

		NQueenBoard( const unsigned int&, const unsigned int&, const unsigned int& );		//	Gets number of rows, number of columns, and number of queens.
		NQueenBoard( const NQueenBoard& );		//	copy constructor

		std::vector<Cor> getCellsMatchingValue( const int& );		//	Gets a number, and returns cordinates of all cells that have the given value.

		const unsigned int &getQueensCount() const;		//	Getter for queensCount field.

};

#endif
