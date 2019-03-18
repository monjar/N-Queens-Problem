
#include "game.h"

Game::Game( const int &size ) { 

    srand( time( NULL ) );
	this->board = new Board( size );
    this->size = new size_t( size );
    for ( int i = 0; i < getSize(); i++ ) 
        for ( int j = 0; j < getSize(); j++ ) 
            (*board)[i][j].setValue( Board::EMPTY_CELL );

}

Game::~Game(){
    delete this->board;
    delete this->size;
}

void Game::initializeRandomlyInEachColumn() {
    for ( int i = 0; i < getSize(); i++ ) {
        int temp = rand() % getSize();
        (*board)[temp][i].setValue( Board::QUEEN_CELL );
    }
}

void Game::initializeRandomlyInEachRow() {
    for ( int i = 0; i < getSize(); i++ ) {
        int temp = rand() % getSize();
        (*board)[i][temp].setValue( Board::QUEEN_CELL );
    }
}

void Game::initializeRandomly() {
    //std::vector<Cor<int>> allCells;
    std::vector<Cor> allCells;
    for ( int i = 0; i < getSize(); i++ ) 
        for ( int j = 0; j < getSize(); j++ )
            allCells.push_back( Cor( i, j ) );
    std::shuffle( allCells.begin(), allCells.end(), std::default_random_engine( time( NULL ) ) );
    for ( int i = 0; i < getSize(); i++ )
        (*board)[allCells[i].getY()][allCells[i].getX()].setValue( Board::QUEEN_CELL );
}

const size_t &Game::getSize() const {
    return *size;
}
