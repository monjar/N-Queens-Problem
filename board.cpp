
#include "board.h"

Board::Board( const int &n ) { 
	cells = new Cell*[ n ];
	for ( int i = 0; i < n; i++ ) 
		cells[i] = new Cell[ n ];
}

