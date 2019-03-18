
#ifndef __CELL_H
#define __CELL_H

class Cell{ 

    private:

		int *value;
		//std::unique_ptr<T> value;
	
	public:

		Cell( const int& );
		Cell();
		Cell( const Cell& );
		~Cell();

		const int &getValue() const;

		void setValue( const int& );

};

#endif
