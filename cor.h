
#ifndef __COR_H
#define __COR_H

#include <iostream>		//cout for debugging

//template <class T>
class Cor { 

    private:

		int x, y;

	public:

		Cor( const int&, const int& );
		Cor( const int& );
		Cor( const Cor& );
		Cor();	//sets to x and y to 0 (int)

		void setCor( const int&, const int& );
		void setCor( const int& );
		void setCor( const Cor& );
		void resetCor();	//sets x and y to 0 (int)
		void setX( const int& );
		void setY( const int& );
		
		const Cor getCor() const;
		const int &getX() const;
		const int &getY() const;

};

#endif
