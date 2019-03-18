
#ifndef __CellTEST_H
#define __CellTEST_H

class CellTest{ 

    private:

		int *value;
		//std::unique_ptr<T> value;
	
	public:

		CellTest( const int& );
		CellTest();
		CellTest( const CellTest& );
		~CellTest();

		const int &getValue() const;

		void setValue( const int& );

};

#endif
