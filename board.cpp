
#include "board.h"

const int Board::EMPTY_CELL = 0;
const int Board::QUEEN_CELL = 1;

Board::Board( const int &size ) { 
	/*cells = new Cell*[ n ];
	for ( int i = 0; i < n; i++ ) 
		cells[i] = new Cell[ n ];*/
	cells.resize( size );
	for ( int i = 0; i < size; i++ )
		cells[i].resize( size );
	//std::cout << "vector is created!" << std::endl;
	for ( int i = 0; i < size; i++ ) 
		for ( int j = 0; j < size; j++ )
			cells[i][j] = new Cell( Board::EMPTY_CELL );
			//cells[i][j].setValue( Board::EMPTY_CELL );
	//std::cout << "After vector creation" << std::endl;
}
/*
std::vector<Cell<int>> &Board::operator[]( const int &row ) {
	return cells[row];
}*/

std::vector<Cell*> &Board::operator[]( const int &row ) {
	return cells[row];
}
