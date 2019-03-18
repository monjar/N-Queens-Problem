
#include "cell.h"

template <class T> 
Cell<T>::Cell( const T&& value ) { 
	setValue( value );
}

template <class T>
Cell<T>::Cell() { 
	setValue( 0 );
}

template <class T>
const T &Cell<T>::getValue() const { 
	return value;
}

template <class T>
void Cell<T>::setValue( const T&& value ) { 
	this->value = value;
}

