#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedpoint( 0 ){
	std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed( const Fixed &fixed ){
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_fixedpoint);
}


void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedpoint = raw;
	return ;
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {
	std::cout << "Copy assignment operator called" << std::endl;

	this->_fixedpoint = rhs.getRawBits();
	return ( *this );
}

const int Fixed::_fracbits = 8;