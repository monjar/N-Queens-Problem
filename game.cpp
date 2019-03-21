
#include "game.h"

Game::Game( const int &size ) { 

    srand( time( NULL ) );
    //std::cout << "Going to create board" << std::endl;
	this->board = new Board( size );
    //std::cout << "Board is Created!" << std::endl;
    this->size = new size_t( size );
    for ( int i = 0; i < getSize(); i++ ) 
        for ( int j = 0; j < getSize(); j++ ) 
            (*board)[i][j]->setValue( Board::EMPTY_CELL );

}

Game::~Game(){
    delete this->board;
    delete this->size;
}

void Game::initializeRandomlyInEachColumn() {
    for ( int i = 0; i < getSize(); i++ ) {
        int temp = rand() % getSize();
        (*board)[temp][i]->setValue( Board::QUEEN_CELL );
    }
}

void Game::initializeRandomlyInEachRow() {
    for ( int i = 0; i < getSize(); i++ ) {
        int temp = rand() % getSize();
        (*board)[i][temp]->setValue( Board::QUEEN_CELL );
    }
}

void Game::initializeRandomly() {
    //std::vector<Cor<int>> allCells;
    std::vector<Cor> allCells;
    for ( int i = 0; i < getSize(); i++ ) 
        for ( int j = 0; j < getSize(); j++ ){
            Cor temp( i, j );
            allCells.push_back( temp );
            //std::cout << allCells[allCells.size()-1].getY() << ' ' << allCells[allCells.size()-1].getX() << std::endl;
        }
    //std::cout << "Added all cells to vector" << std::endl;
    std::shuffle( allCells.begin(), allCells.end(), std::default_random_engine( time( NULL ) ) );
    //std::cout << "Shuffling is completed!" << std::endl;
    for ( int i = 0; i < getSize(); i++ ){
        //std::cout << allCells[i].getY() << ' ' << allCells[i].getX() << std::endl;
        (*board)[allCells[i].getY()][allCells[i].getX()]->setValue( Board::QUEEN_CELL );
        //std::cout << allCells[i].getX() << ' ' << allCells[i].getY() << std::endl;
    }
    //std::cout << "n random blocks are chosen" << std::endl;
}

const size_t &Game::getSize() const {
    return *size;
}
