#include "Dog.hpp"

Dog::Dog(void){
	this->_type = "Dog";
	std::cout << "Default constructor Dog called" << std::endl;
	return ;
}

Dog::~Dog(void){
	std::cout << "Dog Destructor called" << std::endl;
	return ;
}

Dog::Dog(Dog const & dog) : Animal (dog) {
	std::cout << "Copy Constructor Cat called" << std::endl;
	*this = dog;
	return;
}

Dog & Dog::operator=(Dog const & oprt){
	std::cout << "Copy Assignemt Dog called" << std::endl;
	this->_type = oprt._type;
	return(*this);
}

void Dog::makeSound(void) const{
	std::cout << "Auuu.... Auuuuuu.... Auuuuuuuuuuuuuuuuuuuuu" << std::endl;
}
