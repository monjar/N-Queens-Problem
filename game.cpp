
#include "game.h"

Game::Game( const int &size ) : Game( size, size, size ) {}

Game::Game( const int &row, const int &column, const unsigned int &queensCount ) {
	srand( time( NULL ) );
	this->board = new NQueenBoard( row, column, queensCount );
}

Game::~Game(){
	delete this->board;
}

void Game::initializeRandomlyInEachColumn() {
	if ( board->getQueensCount() > board->getColumnsCount() )
		throw "Can't put one queen in each column! Exiting.";
	for ( int i = 0; i < board->getQueensCount(); i++ ) {
		int temp = rand() % board->getRowsCount();
		(*board)[temp][i]->setValue( NQueenBoard::QUEEN_CELL );
	}
}

void Game::initializeRandomlyInEachRow() {
	if ( board->getQueensCount() > board->getRowsCount() )
		throw "Can't put one queen in each row! Exiting.";
	for ( int i = 0; i < board->getQueensCount(); i++ ) {
		int temp = rand() % board->getColumnsCount();
		(*board)[i][temp]->setValue( NQueenBoard::QUEEN_CELL );
	}
}

void Game::initializeRandomly() {
	
	if ( board->getQueensCount() > board->getRowsCount() * board->getColumnsCount() )
		throw "Number of queens is more that number of cells! Exiting.";

	std::vector<Cor> allCells;
	for ( int i = 0; i < board->getRowsCount(); i++ ) 
		for ( int j = 0; j < board->getColumnsCount(); j++ ){
			Cor temp( i, j );
			allCells.push_back( temp );
		}

	std::shuffle( allCells.begin(), allCells.end(), std::default_random_engine( time( NULL ) ) );
	
	for ( int i = 0; i < board->getQueensCount(); i++ )
		(*board)[allCells[i].getY()][allCells[i].getX()]->setValue( NQueenBoard::QUEEN_CELL );

}
