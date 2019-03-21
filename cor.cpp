
#include "cor.h"

//template <class T>
Cor::Cor( const int &x, const int &y ) {
    //std::cout << "passed x and y to constructor: " << x << ' ' << y << std::endl;
    setCor( x, y );
}

//template <class T>
Cor::Cor( const int &xy ) {
    setCor( xy, xy );
}

//template <class T>
Cor::Cor( const Cor &cor ) {
    //std::cout << "In copy constructor!" << std::endl;
    setCor( cor.getX(), cor.getY() );
    //std::cout << "In copy constructor: " << cor.getX() << ' ' << this->getX() << "    " << cor.getY() << ' ' << this->getY() << std::endl;
}

//template <class T>
Cor::Cor() {
    setCor( 0, 0 );
}

//template <class T>
void Cor::setCor( const int &x, const int &y ) {
    //std::cout << "passed x and y to setter: " << x << ' ' << y << std::endl;
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
    //std::cout << "passed x to x setter: " << x << std::endl;
    this->x = x;
}

//template <class T>
void Cor::setY( const int &y ) {
    //std::cout << "passed y to y setter: " << y << std::endl;
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
