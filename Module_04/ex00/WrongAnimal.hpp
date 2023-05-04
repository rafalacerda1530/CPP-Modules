#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
 
protected:

	std::string	_type;

public:

	WrongAnimal( void );
	WrongAnimal( WrongAnimal const & rhs );
	~WrongAnimal( void );
	WrongAnimal & operator=( WrongAnimal const & rhs );

	void			makeSound( void ) const ;
	std::string		getType( void ) const;
};

#endif