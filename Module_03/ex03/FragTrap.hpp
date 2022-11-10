#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

	public:
	FragTrap(void);
	~FragTrap(void);
	FragTrap(const FragTrap& fragTrap);
	FragTrap(std::string const &name) ;
	FragTrap & operator=(FragTrap const & fragTrap);

	void highFivesGuys(void);
};

#endif 