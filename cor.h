
/*
Cordinate class! holds x and y of a point.
*/

#ifndef __COR_H
#define __COR_H

#include <iostream>		//cout for debugging

class Cor { 

	private:

		int x, y;		//	Come on. 

	public:

		Cor( const int&, const int& );				//	Gets x and y, and does the rest. 
		Cor( const int& = 0 );						//	Gets a number, and sets x and y to that number. 
		Cor( const Cor& );							//	Copy Constructor

		void setCor( const int&, const int& );		//	Setter for x and y.
		void setCor( const int& );					//	Setter for x and y. Initializes both of them with "value".
		void setCor( const Cor& );					//	Setter for x and y. Copies the values of input Cor. 
		void resetCor();							//	sets x and y to 0.
		void setX( const int& );					//	Setter for x.
		void setY( const int& );					//	Setter for y. 
		
		const Cor getCor() const;					//	Getter for Cor.
		const int &getX() const;					//	Getter for x.
		const int &getY() const;					//	Getter for y.

};

#endif
