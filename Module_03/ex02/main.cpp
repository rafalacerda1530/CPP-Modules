#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void ) {
	FragTrap art( "Art" );

	art.attack( "Agrona" );
	art.takeDamage( 3 );
	art.takeDamage( 50 );
	art.beRepaired( 3 );
	art.highFivesGuys( );
	art.takeDamage( 50 );
	return ( 0 );
}