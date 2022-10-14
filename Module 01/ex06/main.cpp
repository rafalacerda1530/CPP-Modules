#include "Harl.hpp"

int	main( int argc, char *argv[] ) {
	Harl instance = Harl();

	if (argc != 2)
	{
		std::cout << "Wrong parameters level!" << std::endl;
		return (1);
	}
	instance.complain(argv[1]);

	return (0);
}