#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
	
	
	private:
	int _fixedpoint;
	static const int	_fracbits;

	public:
	Fixed(void);
	~Fixed(void);
	Fixed( const Fixed &fixed );
	Fixed &	operator=( Fixed const & numb );

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif