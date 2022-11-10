#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main( void ) {
	DiamondTrap art("Grey");

	std::cout << std::endl;

	art.attack("Agrona");
	art.ClapTrap::attack("Windisom");
	art.takeDamage(60);
	art.beRepaired(60);
	std::cout << std::endl;
	art.guardGate();
	art.highFivesGuys();
	art.whoAmI();
	std::cout << std::endl;
	art.takeDamage(70);
	art.takeDamage(70);
	std::cout << std::endl;
	art.beRepaired(70);
	art.attack("Taci");
	std::cout << std::endl;
	art.guardGate();
	art.highFivesGuys();
	art.whoAmI();
	std::cout << std::endl;
	return ( 0 );
}