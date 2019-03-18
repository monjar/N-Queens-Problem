
#include "cell.h"

template <class T> 
Cell<T>::Cell( const T& value ) { 
	this->value = new T;
	//value = std::make_unique<T>();
	setValue( value );
}

template <class T>
Cell<T>::Cell() { 
	Cell( 0 );
}

template <class T>
Cell<T>::Cell( const Cell<T> &temp ) {
	setValue( temp.getValue() );
}

template <class T>
Cell<T>::~Cell() { 
	delete value;
}

template <class T>
const T &Cell<T>::getValue() const { 
	return *value;
}

template <class T>
void Cell<T>::setValue( const T& value ) { 
	*(this->value) = value;
}

