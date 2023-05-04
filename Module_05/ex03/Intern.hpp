#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern {

private:

	Aform * _presidential( std::string target );
	Aform * _robotomy( std::string target );
	Aform * _shrubbery( std::string target );
	Aform * _unknown( std::string target );

public:

	Intern( void );
	Intern( Intern const & rhs );
	~Intern();
	Intern& operator=(const Intern& obj);

	Aform * makeForm( std::string formName, std::string target );

	class FormUnknown : public std::exception {
		virtual const char* what( void ) const throw();
	};

	class NoTarget : public std::exception {
		virtual const char* what( void ) const throw();
	};
};

#endif