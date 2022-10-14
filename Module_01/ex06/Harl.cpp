#include "Harl.hpp"

Harl::Harl( void ) {
	return ;
}

Harl::~Harl( void ) {
	return ;
}

void	Harl::_debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my "
		"7XL-double-cheese-triple-pickle-specialketchup burger. "
		"I really do!\n" << std::endl;
}

void	Harl::_info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. "
		"You didn’t put enough bacon in my burger! If you did, "
		"I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::_warning( void ) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. "
		"I’ve been coming for years whereas you started working"
		"here since last month.\n" << std::endl;
}

void	Harl::_error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n"
		<< std::endl;
}

void	Harl::_unknown( void ) {
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Harl::_levelAndAbove(int i) {
	void ( Harl::*f[] ) ( void ) = { &Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error, &Harl::_unknown };

	if (i == 4) {
		( this->*f[i] ) ();
		return ;
	}
	while (i < 4)
		( this->*f[i++] ) ();

}

void	Harl::complain( std::string level ) {
	std::string	levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int			i = 0;

	while (i < 4 && levels[i] != level)
		i++;
	this->_levelAndAbove(i);
}
