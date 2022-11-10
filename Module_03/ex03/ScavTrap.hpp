#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap{
	private: 

	public:
	ScavTrap(void);
	~ScavTrap(void);
	ScavTrap(const ScavTrap& scavTrap);
	ScavTrap(std::string const &name) ;
	ScavTrap & operator=(ScavTrap const & scavTrap);

	void guardGate();
	void attack(const std::string& target);
};

#endif 