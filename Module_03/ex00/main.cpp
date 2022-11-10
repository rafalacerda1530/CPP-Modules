#include "ClapTrap.hpp"


int	main( void ) {
	ClapTrap art( "Art" );

	art.attack( "Agrona" );
	art.takeDamage( 3 );
	art.beRepaired( 3 );
	return ( 0 );
}
