#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal{

	protected:
	std::string _type;

	public:
	Animal( void );
	virtual ~Animal( void );
	Animal & operator=(Animal const &  oprt);
	Animal(Animal const & animal);

	std::string  getType(void) const;
	virtual void makeSound(void) const;
};

#endif 