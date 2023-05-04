#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type( "WrongDragon" ) {
	std::cout << "Default constructor WrongAnimal called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const & rhs ) {
	std::cout << "Copy constructor WrongAnimal called" << std::endl;
	*this = rhs;
	return ;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "Default destructor WrongAnimal called" << std::endl;
	return ;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs ) {
	std::cout << "Copy assignment WrongAnimal operator called" << std::endl;
	this->_type = rhs._type;
	return ( *this );
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "Roar...Roar...Rawr...Rawrrrrrrrrrr" << std::endl;
	return ;
}

std::string		WrongAnimal::getType( void ) const {
	return (this->_type);
}
