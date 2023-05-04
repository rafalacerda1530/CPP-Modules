#include "Intern.hpp"

Intern::Intern( void ) {
	return ;
}

Intern::Intern( Intern const & rhs ) {
	*this = rhs;
	return ;
}

Intern::~Intern() {
	return ;
}

Intern& Intern::operator=(const Intern& obj)
{
	(void)obj;
	return (*this);
}


Aform * Intern::_presidential( std::string target ) {
	Aform * form = new PresidentialPardonForm(target);
	std::cout << "Intern creates " << form->getName() << std::endl;
	return ( form );
}

Aform * Intern::_robotomy( std::string target ) {
	Aform * form = new RobotomyRequestForm(target);
	std::cout << "Intern creates " << form->getName() << std::endl;
	return ( form );
}
Aform * Intern::_shrubbery( std::string target ) {
	Aform * form = new ShrubberyCreationForm(target);
	std::cout << "Intern creates " << form->getName() << std::endl;
	return ( form );
}

Aform * Intern::_unknown( std::string target ) {
	(void)target;
	throw FormUnknown();
	return (NULL);
}

const char* Intern::FormUnknown::what( void ) const throw() {
	return ( "Form Unknown!!" );
}

const char* Intern::NoTarget::what( void ) const throw() {
	return ( "No target passed!!" );
}

Aform * Intern::makeForm( std::string formName, std::string target ) {
	if (target.empty())
	{
		throw NoTarget();
		return ( NULL );
	}
	Aform * ( Intern::*f[] ) ( std::string ) = { &Intern::_presidential, &Intern::_robotomy, &Intern::_shrubbery, &Intern::_unknown };
	std::string forms[] = { "presidential pardon", "robotomy request", "shrubbery creation" };
	for (int i = 0; i < 3; i++)
		if (forms[i] == formName)
			return ( ( this->*f[i] ) ( target ) );
	return ( ( this->*f[3] ) ( target ) );
}
