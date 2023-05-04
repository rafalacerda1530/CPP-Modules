#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private: 

	Brain *_brain;

	public:
	Cat(void);
	~Cat(void);
	Cat(Cat const & cat);
	Cat & operator=(Cat const & oprt);
	
	std::string	getIdeas( int index );
	void setIdeas( int index, std::string idea );
	void makeSound(void) const;

};

#endif 