#include "Animal.hpp"

Animal::Animal( void ) : _type( "Parrot" ) {
	std::cout << "Default constructor Animal called" << std::endl;
	return ;
}

Animal::~Animal( void ) {
	std::cout << "Destructor Animal called" << std::endl;
	return ;
}

Animal & Animal::operator=(Animal const &  oprt){
	std::cout << "Copy Assignemt Animal called" << std::endl;
	this->_type = oprt._type;
	return(*this);
}

Animal::Animal(Animal const  & animal) {
	std::cout << "Copy Constructor Animal called" << std::endl;
	*this = animal;
	return;
}

 std::string Animal::getType(void) const{
	return(this->_type);
}

void Animal::makeSound(void)const{
	std::cout << "Im a Parrot and i can talk" << std::endl;
}