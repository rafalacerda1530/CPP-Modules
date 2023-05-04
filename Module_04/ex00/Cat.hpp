#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal{
	private: 

	public:
	Cat(void);
	~Cat(void);
	Cat(Cat const & cat);
	Cat & operator=(Cat const & oprt);
	
	void makeSound(void) const;

};

#endif 