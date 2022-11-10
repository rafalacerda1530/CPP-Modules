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
	void	setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

	bool operator!=(Fixed const & comp);
	bool operator>(Fixed const & comp);
	bool operator<(Fixed const & comp);
	bool operator>=(Fixed const & comp);
	bool operator<=(Fixed const & comp);
	bool operator==(Fixed const & comp);
	Fixed operator+(Fixed const & sum);
	Fixed operator-(Fixed const & sub);
	Fixed operator*(Fixed const & mul);
	Fixed operator/(Fixed const & mul);

	Fixed operator++(int);
	Fixed operator++(void);
	Fixed operator--(int);
	Fixed operator--(void);

	static Fixed & max(Fixed & a, Fixed & b);
	static Fixed & min(Fixed & a, Fixed & b);
	static const Fixed & min(Fixed const & a, Fixed const & b);
	static const Fixed & max(Fixed const & a, Fixed const & b);
};

std::ostream & operator<<( std::ostream & out, Fixed const & rhs );

#endif