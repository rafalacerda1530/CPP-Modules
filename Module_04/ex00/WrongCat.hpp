#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:

	WrongCat( void );
	WrongCat( WrongCat const & rhs );
	~WrongCat( void );
	WrongCat & operator=( WrongCat const & rhs );

	void	makeSound( void ) const ;

};

#endif