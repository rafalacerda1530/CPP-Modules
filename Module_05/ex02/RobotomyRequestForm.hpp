#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include "Aform.hpp"
#include <ctime>
#include <cstdlib> 
 
class RobotomyRequestForm : public Aform {

private:

	std::string	_target;

public:

	RobotomyRequestForm( void );
	RobotomyRequestForm( std::string target );
	RobotomyRequestForm( RobotomyRequestForm const & rhs );
	~RobotomyRequestForm( void );
	RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs );

	void	execute( Bureaucrat const & executor ) const;
};

#endif