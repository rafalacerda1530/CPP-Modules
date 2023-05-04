#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal{

	protected:
	std::string _type;

	public:
	AAnimal( void );
	virtual ~AAnimal( void );
	AAnimal & operator=(AAnimal const &  oprt);
	AAnimal(AAnimal const & animal);

	std::string  getType(void) const;
	virtual void makeSound(void) const = 0;
};

#endif 