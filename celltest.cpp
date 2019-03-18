
#include "celltest.h"

CellTest::CellTest( const int &value ) {
    this->value = new int( value );
}

CellTest::CellTest() {
    CellTest( 0 );
}

CellTest::CellTest( const CellTest &CellTest ) {
    setValue( CellTest.getValue() );
}

CellTest::~CellTest() {
    delete value;
}

const int &CellTest::getValue() const { 
    return *value;
}

void CellTest::setValue( const int &value ) {
    *(this->value) = value;
}
