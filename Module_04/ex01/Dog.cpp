#include "Dog.hpp"

Dog::Dog(void){
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Default constructor Dog called" << std::endl;
	return ;
}

Dog::~Dog(void){
	std::cout << "Dog Destructor called" << std::endl;
	delete this->_brain;
	return ;
}

Dog::Dog(Dog const & dog) : Animal (dog) {
	std::cout << "Copy Constructor Cat called" << std::endl;
	this->_brain = new Brain();
	*this = dog;
	return;
}

Dog & Dog::operator=(Dog const & oprt){
	std::cout << "Copy Assignemt Dog called" << std::endl;
	this->_type = oprt._type;
	*(this->_brain) = *(oprt._brain);
	return(*this);
}

void Dog::makeSound(void) const{
	std::cout << "Auuu.... Auuuuuu.... Auuuuuuuuuuuuuuuuuuuuu" << std::endl;
}

std::string	Dog::getIdeas( int index ) {
	return (this->_brain->getIdeas(index));
}

void		Dog::setIdeas( int index, std::string idea ) {
	this->_brain->setIdeas( index, idea );
}
