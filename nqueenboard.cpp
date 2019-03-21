
#include "nqueenboard.h"

const int NQueenBoard::EMPTY_CELL = 0;
const int NQueenBoard::QUEEN_CELL = 1;

NQueenBoard::NQueenBoard( const unsigned int &row, const unsigned int &column, const unsigned int &queensCount )
     : Board( row, column, NQueenBoard::EMPTY_CELL )
     , queensCount( queensCount) {
    
    this->emptyCellsCor = this->getCellsMatchingValue( NQueenBoard::EMPTY_CELL );
    this->queenCellsCor = this->getCellsMatchingValue( NQueenBoard::QUEEN_CELL );
    
}

const unsigned int &NQueenBoard::getQueensCount() const {
    return this->queensCount;
}

std::vector<Cor> NQueenBoard::getCellsMatchingValue( const int &value ) {
    std::vector<Cor> returnValue;
    for ( unsigned int i = 0; i < this->getRowsCount(); i++ ) 
        for ( unsigned int j = 0; j < this->getColumnsCount(); j++ ) {
            Cell currentCell = *( this->cells[i].at(j) );
            if ( currentCell.getValue() == value )
                returnValue.push_back( Cor( i, j ) );
        }
    return returnValue;
}
