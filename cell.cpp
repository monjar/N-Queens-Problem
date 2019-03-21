
#include "cell.h"

Cell::Cell( const int &value ) {
    this->value = new int( value );
}

Cell::Cell() {
    Cell( 0 );
}

Cell::Cell( const Cell &cell ) {
    this->value = new int( cell.getValue() );
}

Cell::~Cell() {
    delete value;
}

const int &Cell::getValue() const { 
    return *value;
}

void Cell::setValue( const int &value ) {
    *(this->value) = value;
}
