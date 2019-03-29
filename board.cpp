
#include "board.h"

Board::Board( const unsigned int &row, const unsigned int &column, const int &defaultValue ) { 
	
	cells.resize( row );
	for ( int i = 0; i < row; i++ )
		cells[i].resize( column );

	for ( int i = 0; i < row; i++ ) 
		for ( int j = 0; j < column; j++ )
			cells[i][j] = new Cell( defaultValue );
	
}

Board::Board( const Board &board ) {
	this->cells.resize( board.getRowsCount() );
	for ( int i = 0; i < board.getRowsCount(); i++ ) {
		this->cells[i].resize( board.getColumnsCount() );
		for ( int j = 0; j < board.getColumnsCount(); j++ ) 
			this->cells[i][j]->setValue( board.getCell(i, j).getValue() );
	}
}

std::vector<Cell*> &Board::operator[]( const int &row ) {
	return cells[row];
}

Cell Board::getCell( const int &row, const int &column ) const {
	return *( this->cells.at( row ).at( column ) );
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
