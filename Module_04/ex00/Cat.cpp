#include "Cat.hpp"

Cat::Cat(void){
	this->_type = "Cat";
	std::cout << "Default constructor Cat called" << std::endl;
	return ;
}

Cat::~Cat(void){
	std::cout << "Cat Destructor called" << std::endl;
	return ;
}

Cat::Cat(Cat const & cat) : Animal (cat) {
	std::cout << "Copy Constructor Cat called" << std::endl;
	*this = cat;
	return;
}

Cat & Cat::operator=(Cat const & oprt){
	std::cout << "Copy Assignemt Cat called" << std::endl;
	this->_type = oprt._type;
	return(*this);
}

void Cat::makeSound(void) const{
	std::cout << "Meow.... Meoooowww.... Meeeeeeeeeowwwwwwwwwww" << std::endl;
}
