#include "Zombie.hpp"

Zombie::Zombie(std::string Name) : _name( Name ){
	return;
}

Zombie::~Zombie(void){
	std::cout << this->_name << " Zombie was Destroyed" << std::endl;;
	return;
} 

void Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}