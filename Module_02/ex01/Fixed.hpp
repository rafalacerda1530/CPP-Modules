#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
	
	private:
	int _fixedpoint;
	static const int	_fracbits;

	public:
	Fixed(void);
	~Fixed(void);
	Fixed( const Fixed &fixed );
	Fixed &	operator=( Fixed const & numb );
	Fixed(const int raw);
	Fixed(const float raw);

	int getRawBits( void ) const;
	float toFloat( void ) const;
	int toInt( void ) const;

};

std::ostream & operator<<( std::ostream & out, Fixed const & rhs );

#endif