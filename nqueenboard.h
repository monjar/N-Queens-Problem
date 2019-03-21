
#ifndef __NQUEENBOARD_H
#define __NQUEENBOARD_H

#include <vector>

#include "board.h"
#include "cor.h"

class NQueenBoard : public Board{ 

    private:

        const unsigned int queensCount;

        std::vector<Cor> emptyCellsCor;
        std::vector<Cor> queenCellsCor;

    public:

        const static int EMPTY_CELL;
        const static int QUEEN_CELL;

        NQueenBoard( const unsigned int&, const unsigned int&, const unsigned int& );

        std::vector<Cor> getCellsMatchingValue( const int& );

        const unsigned int &getQueensCount() const;

};

#endif
