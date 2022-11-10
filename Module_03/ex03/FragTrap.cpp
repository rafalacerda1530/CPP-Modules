#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attDamage = 30;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name){
	std::cout << "FragTrap name constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attDamage = 30;
}

FragTrap::FragTrap(const FragTrap& fragtrap) : ClapTrap(fragtrap){
	std::cout << "copy constructor called" << std::endl;
	*this = fragtrap;
	return;
}

FragTrap::~FragTrap(void){
	std::cout << "FragTrap Destructor constructor called" << std::endl;
	return;
}

FragTrap & FragTrap::operator=(FragTrap const & fragtrap){
	std::cout << "Copy FragTrap assignment operator called" << std::endl;
	this->_name = fragtrap._name;
	this->_hitPoints = fragtrap._hitPoints;
	this->_energyPoints = fragtrap._energyPoints;
	this->_attDamage = fragtrap._attDamage;
	return(*this);
}

void	FragTrap::highFivesGuys( void ) {
	std::cout << "FragTrap " << this->_name;
	std::cout << " Hello Everyone 🖖!" << std::endl;
}
