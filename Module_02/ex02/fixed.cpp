#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedpoint( 0 ){
	return;
}

Fixed::~Fixed(void){
	return;
}

Fixed::Fixed( const Fixed &fixed ){
	*this = fixed;
	return;
}

int Fixed::getRawBits(void) const{
	return(this->_fixedpoint);
}

void	Fixed::setRawBits( int const raw ) {
	this->_fixedpoint = raw;
	return ;
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {
	this->_fixedpoint = rhs.getRawBits();
	return ( *this );
}

Fixed::Fixed(const int raw){
	this->_fixedpoint = raw << Fixed::_fracbits;
	return;
}

Fixed::Fixed(const float raw){
	this->_fixedpoint =  roundf( raw * (1 << Fixed::_fracbits) );
	return;
}

float Fixed::toFloat( void ) const{
	return((float)this->_fixedpoint / (1 << Fixed::_fracbits));
}

int Fixed::toInt( void ) const{
	return(this->_fixedpoint >> Fixed::_fracbits );
}

std::ostream & operator<<( std::ostream & out, Fixed const & rhs ) {
	out << rhs.toFloat();
	return ( out );
}

bool Fixed::operator>(Fixed const & comp){
	return(this->getRawBits() > comp.getRawBits());
}

bool Fixed::operator<(Fixed const & comp){
	return(this->getRawBits() < comp.getRawBits());
}

bool Fixed::operator>=(Fixed const & comp){
	return(this->getRawBits() >= comp.getRawBits());
}

bool Fixed::operator<=(Fixed const & comp){
	return(this->getRawBits() <= comp.getRawBits());
}

bool Fixed::operator==(Fixed const & comp){
	return(this->getRawBits() == comp.getRawBits());
}

bool Fixed::operator!=(Fixed const & comp){
	return(this->getRawBits() != comp.getRawBits());
}

Fixed Fixed::operator+(Fixed const & sum){
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() + sum.getRawBits());
	return(tmp);
}

Fixed Fixed::operator-(Fixed const & sub){
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() - sub.getRawBits());
	return(tmp);
}

Fixed Fixed::operator*(Fixed const & mul){
	Fixed tmp;
	tmp.setRawBits(this->getRawBits() * mul.getRawBits() >> Fixed::_fracbits);
	return(tmp);
}

Fixed Fixed::operator/(Fixed const & mul){
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() / mul.getRawBits() << Fixed::_fracbits);
	return(tmp);
}

Fixed Fixed::operator++(int){
	Fixed tmp;

	tmp._fixedpoint = _fixedpoint++;
	return(tmp);
}

Fixed Fixed::operator++(void){
	Fixed tmp;

	tmp._fixedpoint = ++_fixedpoint;
	return(tmp);
}


Fixed Fixed::operator--(void){
	Fixed tmp;
	tmp._fixedpoint = --_fixedpoint;
	return(tmp);
}

Fixed Fixed::operator--(int){
	Fixed tmp;

	tmp._fixedpoint = _fixedpoint--;
	return(tmp);
}

Fixed & Fixed::min(Fixed & a, Fixed & b){
	if(a.getRawBits() < b.getRawBits())
		return(a);
	return(b);
}

const Fixed & Fixed::min(Fixed const & a, Fixed const & b){
	if(a.getRawBits() < b.getRawBits())
		return(a);
	return(b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b){
	if(a.getRawBits() > b.getRawBits())
		return(a);
	return(b);
}

const Fixed & Fixed::max(Fixed const & a, Fixed const & b){
	if(a.getRawBits() > b.getRawBits())
		return(a);
	return(b);
}

const int Fixed::_fracbits = 8;