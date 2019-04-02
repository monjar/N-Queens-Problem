
#ifndef __CHESSSTUFF_H
#define __CHESSSTUFF_H

#include "board.h"
#include "cell.h"
#include "nqueenboard.h"

class ChessStuff{ 

	public:

		const static int &numberOfConflicts( Board *const ) const;
		const static bool &isQueenInCell( Cell *const ) const;
		static void aQueenIsHere( const Cor &, const int&, const int&, bool** ) const;

	private:

		static void fillInDangerCells( Board *const, bool** ) const;

};

#endif
