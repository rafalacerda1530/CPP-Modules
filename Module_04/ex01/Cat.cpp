#include "Cat.hpp"

Cat::Cat(void){ 
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Default constructor Cat called" << std::endl;
	return ;
}

Cat::~Cat(void){
	std::cout << "Cat Destructor called" << std::endl;
	delete this->_brain;
	return ;
}

Cat::Cat(Cat const & cat) : Animal (cat) {
	std::cout << "Copy Constructor Cat called" << std::endl;
	this->_brain = new Brain();
	*this = cat;
	return;
}

Cat & Cat::operator=(Cat const & oprt){
	std::cout << "Copy Assignemt Cat called" << std::endl;
	this->_type = oprt._type;
	*(this->_brain) = *(oprt._brain);
	return(*this);
}

void Cat::makeSound(void) const{
	std::cout << "Meow.... Meoooowww.... Meeeeeeeeeowwwwwwwwwww" << std::endl;
}

void Cat::setIdeas(int index, std::string idea){
	this->_brain->setIdeas(index, idea);
}

std::string	Cat::getIdeas( int index ) {
	return (this->_brain->getIdeas(index));
}

