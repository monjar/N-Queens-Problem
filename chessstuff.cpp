
#include "chessstuff.h"

const int &ChessStuff::numberOfConflicts( Board *const board ) const {

	int rows = board->getRowsCount();
	int columns = board->getColumnsCount();

	bool **inDangerCells;
	inDangerCells = new bool*[ rows ];
	for ( int i = 0; i < rows; i++ ) {
		inDangerCells[i] = new bool[ columns ];
		for ( int j = 0; j < columns; j++ ) 
			inDangerCells[i][j] = false;
	}

	ChessStuff::fillInDangerCells( board, inDangerCells );

	int returnValue = 0;
	for ( int i = 0; i < rows; i++ ) {
		for ( int j = 0; j < columns; j++ ) {
			if ( ChessStuff::isQueenInCell( &( board->getCell() ) ) && inDangerCells[i][j] )
				returnValue++;
		}
	}

	return returnValue;

}

void ChessStuff::fillInDangerCells( Board *const board, bool **inDangerCells ) {

	for ( int i = 0; i < board->getRowsCount(); i++ )
		for ( int j = 0; j < board->getColumnsCount(); j++ )
			if ( ChessStuff::isQueenInCell( &( board->getCell( i, j ) ) ) )
				ChessStuff::aQueenIsHere( Cor( i, j ), board->getRowsCount(), board->getColumnsCount(), inDangerCells );

}

const bool &ChessStuff::isQueenInCell( Cell *const cell ) const {

	return ( cell->getValue() == NQueenBoard::QUEEN_CELL );

}

void ChessStuff::aQueenIsHere( const Cor &cor, const int &rows, const int &columns, bool **inDangerCells ) {

	const int x = cor.getX(), y = cor.getY();

	for ( int i = 0; i < rows; i++ ) { 
		if ( i == y ) continue;
		inDangerCells[i][x] = true;
	}
	for ( int i = 0; i < columns; i++ ) { 
		if ( i == x ) continue;
		inDangerCells[y][i] = true;
	}

	for ( int i = 1; y + i < rows && x + i < columns; i++ ) 
		inDangerCells[y+i][x+i] = true;
	
	for ( int i = -1; y + i >= 0 && x + i >= 0; i-- ) 
		inDangerCells[y+i][x+i] = true;

	for ( int i = 1; y + i < rows && x - i >= 0; i++ )
		inDangerCells[y+i][x-i] = true;
	
	for ( int i = -1; y + i >= 0 && x - i < columns; i-- ) 
		inDangerCells[y+i][x-i] = true;

}
