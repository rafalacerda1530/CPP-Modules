#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(){
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attDamage = 20;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name){
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap) : ClapTrap(scavtrap){
	std::cout << "copy constructor called" << std::endl;
	*this = scavtrap;
	return;
}

ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap Destructor constructor called" << std::endl;
	return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & scavtrap){
	std::cout << "Copy ScavTrap assignment operator called" << std::endl;
	this->_name = scavtrap._name;
	this->_hitPoints = scavtrap._hitPoints;
	this->_energyPoints = scavtrap._energyPoints;
	this->_attDamage = scavtrap._attDamage;
	return(*this);
}

void ScavTrap::attack(const std::string& target){
	if(this->_hitPoints <= 0){
		std::cout << "ScavTrap" << this->_name << " is Dead" << std::endl;
		return;
	}
	if(this->_energyPoints <= 0){
		std::cout << "ScavTrap " << this->_name << "is without energy" << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attDamage << " of damage" << std::endl;
	return;
}

void ScavTrap::guardGate(){
	std::cout << "The ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
	return;
}