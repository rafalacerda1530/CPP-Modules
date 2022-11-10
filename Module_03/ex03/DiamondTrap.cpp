#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap( ) {
	this->_name = "";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attDamage = FragTrap::_attDamage;
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( std::string const & name ) 
	: ClapTrap( name + "_clap_name" ) {
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attDamage = FragTrap::_attDamage;
	std::cout << "Name DiamondTrap constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( const DiamondTrap & diamondTrap ) : ClapTrap( diamondTrap ), FragTrap( diamondTrap ), ScavTrap( diamondTrap ) {
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	*this = diamondTrap;
	return ;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "Default DiamondTrap descructor called" << std::endl;
	return ;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & diamondTrap ) {
	std::cout << "Copy DiamondTrap assignment operator called" << std::endl;
	this->_name = diamondTrap._name;
	this->_hitPoints = diamondTrap._hitPoints;
	this->_energyPoints = diamondTrap._energyPoints;
	this->_attDamage = diamondTrap._attDamage;
	return ( *this );
}

void	DiamondTrap::attack( std::string const & target ) {
	ScavTrap::attack( target );
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "I'm DiamondTrap "
		<< this->_name << " and ClapTrap " << this->ClapTrap::_name
		<< std::endl;
}
