
#include "cor.h"

//template <class T>
Cor::Cor( const int &x, const int &y ) {
    setCor( x, y );
}

//template <class T>
Cor::Cor( const int &xy ) {
    Cor( xy, xy );
}

//template <class T>
Cor::Cor( const Cor &cor ) {
    Cor( cor.getX(), cor.getY() );
}

//template <class T>
Cor::Cor() {
    Cor( 0, 0 );
}

//template <class T>
void Cor::setCor( const int &x, const int &y ) {
    setX( x );
    setY( y );
}

//template <class T>
void Cor::setCor( const int &xy ) {
    setX( xy );
    setY( xy );
}

//template <class T>
void Cor::setCor( const Cor &cor ) {
    setX( cor.getX() );
    setY( cor.getY() );
}

//template <class T>
void Cor::resetCor() {
    setCor( 0, 0 );
}

//template <class T>
void Cor::setX( const int &x ) {
    this->x = x;
}

//template <class T>
void Cor::setY( const int &y ) {
    this->y = y;
}

//template <class T>
const Cor Cor::getCor() const { 
    Cor temp( *this );
    return temp;
}

//template <class T>
const int &Cor::getX() const { 
    return x;
}

//template <class T>
const int &Cor::getY() const {
    return y;
}
