#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) 
	: _name(""), _hitPoints(10), _energyPoints(10), _attDamage(0){
	std::cout << "Default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string const &name) 
	: _name(name), _hitPoints(10), _energyPoints(10), _attDamage(0){
	std::cout << "ClapTrap name constructor called" << std::endl;
	return;
}

ClapTrap::~ClapTrap(void){
 	std::cout << "Destructor Called" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap){
	std::cout << "Copy Constructpr Called" << std::endl;
	*this = clapTrap;
	return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & clapTrap){
	std::cout << "Copy ClapTrap assignment operator called" << std::endl;
	this->_name = clapTrap._name;
	this->_hitPoints = clapTrap._hitPoints;
	this->_energyPoints = clapTrap._energyPoints;
	this->_attDamage = clapTrap._attDamage;
	return(*this);
}

void ClapTrap::attack(const std::string& target){
	if(this->_hitPoints <= 0){
		std::cout << "Clap Trap" << this->_name << " is Dead" << std::endl;
		return;
	}
	if(this->_energyPoints <= 0){
		std::cout << "Clap Trap " << this->_name << "is without energy" << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << "Clap Trap " << this->_name << " attacks " << target << ", causing " << this->_attDamage << " of damage" << std::endl;
	return;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << "Clap Trap " << this->_name << " its suffering " << amount << " of damage ";
	this->_hitPoints -= amount;
	if(this->_hitPoints <= 0){
		std::cout << " having now " << this->_hitPoints << " and now " << this->_name << " Is Dead" << std::endl;
		return;
	}
	std::cout << " having now " << this->_hitPoints << " Of health" << std::endl;
	return;
}

void ClapTrap::beRepaired(unsigned int amount){
	if(this->_hitPoints <= 0){
		std::cout << "Clap Trap " << this->_name << " is Dead" << std::endl;
		return;
	}
	if(this->_energyPoints <= 0){
		std::cout << "Clap Trap " << this->_name << "is without energy" << std::endl;
		return;
	}
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << "Clap Trap " << this->_name << " was repaired with " << amount << " Hit Points" << " having now " << this->_hitPoints << " Of health" << std::endl;
}