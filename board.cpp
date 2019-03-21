
#include "board.h"

Board::Board( const unsigned int &row, const unsigned int &column, const int &defaultValue ) { 
	
	cells.resize( row );
	for ( int i = 0; i < row; i++ )
		cells[i].resize( column );

	for ( int i = 0; i < row; i++ ) 
		for ( int j = 0; j < column; j++ )
			cells[i][j] = new Cell( defaultValue );
	
}

std::vector<Cell*> &Board::operator[]( const int &row ) {
	return cells[row];
}

const std::pair<size_t, size_t> Board::getSize() const { 
	std::pair<size_t, size_t> returnValue = std::make_pair( getRowsCount(), getColumnsCount() );
	return returnValue;
}

const size_t Board::getRowsCount() const { 
	return this->cells.size();
}

const size_t Board::getColumnsCount() const { 
	return this->cells[0].size();
}
