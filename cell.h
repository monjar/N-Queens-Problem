
/*
Every board consists of some cells. This class plays this role. 
*/

#ifndef __CELL_H
#define __CELL_H

class Cell{ 

		private:

			int *value;		//	Value of the cell, obviously. 
	
	public:

		Cell( const int& = 0 );		//	Gets a value, and does the rest.
		Cell( const Cell& );		//	Copy constructor
		~Cell();					//	Destructor

		const int &getValue() const;		//	Getter for value.

		void setValue( const int& );		//	Setter for value.

};

#endif
