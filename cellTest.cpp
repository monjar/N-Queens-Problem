
#include <iostream>

#include "cell.h"

using namespace std;

int main () { 

	Cell<int> cell1( 5 );

	Cell<int>::test( 5 );


/*	int a = 4;
	Cell<int> cell( std::forward<decltype(a)>(a) );*/

	return 0;

}

