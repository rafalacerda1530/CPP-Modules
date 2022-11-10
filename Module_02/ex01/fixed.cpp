#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedpoint( 0 ){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed &fixed ){
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return;
}

int Fixed::getRawBits(void) const{
	return(this->_fixedpoint);
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {
	std::cout << "Copy assignment operator called" << std::endl;

	this->_fixedpoint = rhs.getRawBits();
	return ( *this );
}

Fixed::Fixed(const int raw){
	std::cout << "Int constructor called" << std::endl;
	this->_fixedpoint = raw << Fixed::_fracbits;
	return;
}

Fixed::Fixed(const float raw){
	std::cout << "Float constructor called" << std::endl;
	this->_fixedpoint =  roundf( raw * (1 << Fixed::_fracbits) );
	return;
}

std::ostream & operator<<( std::ostream & out, Fixed const & rhs ) {
	out << rhs.toFloat();
	return ( out );
}

float Fixed::toFloat( void ) const{
	return((float)this->_fixedpoint / (1 << Fixed::_fracbits));
}

int Fixed::toInt( void ) const{
	return(this->_fixedpoint >> Fixed::_fracbits );
}

const int Fixed::_fracbits = 8;