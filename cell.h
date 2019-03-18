
#ifndef __CELL_H
#define __CELL_H

template <class T> 
class Cell {

	private:

		T value;
	
	public:

		Cell( const T& );
		Cell();

		const T &getValue() const;

		void setValue( const T& );

};

#endif

