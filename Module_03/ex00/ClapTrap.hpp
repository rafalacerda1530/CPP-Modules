#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	private: 
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attDamage;

	public:
	ClapTrap(void);
	~ClapTrap(void);
	ClapTrap(const ClapTrap& clapTrap);
	ClapTrap(std::string const &name) ;
	ClapTrap & operator=(ClapTrap const & clapTrap);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif 