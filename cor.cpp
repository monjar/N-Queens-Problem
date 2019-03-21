
#include "cor.h"

Cor::Cor( const int &x, const int &y ) {
    setCor( x, y );
}

Cor::Cor( const int &xy ) {
    setCor( xy, xy );
}

Cor::Cor( const Cor &cor ) {
    setCor( cor.getX(), cor.getY() );
}

void Cor::setCor( const int &x, const int &y ) {
    setX( x );
    setY( y );
}

void Cor::setCor( const int &xy ) {
    setX( xy );
    setY( xy );
}

void Cor::setCor( const Cor &cor ) {
    setX( cor.getX() );
    setY( cor.getY() );
}

void Cor::resetCor() {
    setCor( 0, 0 );
}

void Cor::setX( const int &x ) {
    this->x = x;
}

void Cor::setY( const int &y ) {
    this->y = y;
}

const Cor Cor::getCor() const { 
    Cor temp( *this );
    return temp;
}

const int &Cor::getX() const { 
    return x;
}

const int &Cor::getY() const {
    return y;
}
