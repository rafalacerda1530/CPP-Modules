#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : _type( "Parrot" ) {
	std::cout << "Default constructor AAnimal called" << std::endl;
	return ;
}

AAnimal::~AAnimal( void ) {
	std::cout << "Destructor AAnimal called" << std::endl;
	return ;
}

AAnimal & AAnimal::operator=(AAnimal const &  oprt){
	std::cout << "Copy Assignemt AAnimal called" << std::endl;
	this->_type = oprt._type;
	return(*this);
}

AAnimal::AAnimal(AAnimal const  & animal) {
	std::cout << "Copy Constructor AAnimal called" << std::endl;
	*this = animal;
	return;
}

 std::string AAnimal::getType(void) const{
	return(this->_type);
}
