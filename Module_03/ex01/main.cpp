#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void ) {
	ScavTrap art( "Art" );

	art.attack( "Agrona" );
	art.takeDamage( 3 );
	art.takeDamage( 50 );
	art.beRepaired( 3 );
	art.guardGate( );
	art.takeDamage( 50 );

	return ( 0 );
}