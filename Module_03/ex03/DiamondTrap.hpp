#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	private:

	std::string	_name;

	public:

	DiamondTrap( void );
	DiamondTrap( std::string const & name );
	DiamondTrap( const DiamondTrap & rhs );
	~DiamondTrap( void );

	DiamondTrap & operator=( DiamondTrap const & rhs );

	void	attack( std::string const & target );
	void	whoAmI( void );

};

#endif