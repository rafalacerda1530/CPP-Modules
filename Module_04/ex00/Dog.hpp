#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal{
	private: 

	public:
	Dog(void);
	~Dog(void);
	Dog(Dog const & dog);
	Dog & operator=(Dog const & oprt);
	
	void makeSound(void)const;
};

#endif 