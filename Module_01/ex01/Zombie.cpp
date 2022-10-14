#include "Zombie.hpp"
#include "ZombieUtils.hpp"

Zombie::Zombie(void){
	return;
}

Zombie::~Zombie(void){
	std::cout << this->_name << " Zombie was Destroyed" << std::endl;;
	return;
}

void Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name){
	this->_name = name;
}
