#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
	private: 
	
	Brain *_brain;

	public:
	Dog(void); 
	~Dog(void);
	Dog(Dog const & dog);
	Dog & operator=(Dog const & oprt);

	std::string	getIdeas( int index );
	void setIdeas( int index, std::string idea );
	void makeSound(void)const;
};

#endif 