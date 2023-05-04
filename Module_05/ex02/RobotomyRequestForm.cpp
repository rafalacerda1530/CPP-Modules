#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) :
	Aform( "RobotomyForm", 72, 45 ), _target( "Art" ) {
	return ;
} 

RobotomyRequestForm::RobotomyRequestForm( std::string target ) :
	Aform( "RobotomyForm", 72, 45 ), _target( target ) {
		return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & rhs ) :
	Aform( "RobotomyForm", 72, 45 ) {
	*this = rhs;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs ) {
	this->_target = rhs._target;
	return ( *this );
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	this->checkExecutor(executor);
	std::cout << "Bzzz..Zzzzzz...Xxx...Pxxx*...***" << std::endl;
	srand(time(NULL));
	if (rand() % 2)
		std::cout << "The " << this->_target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "The robotomy of " << this->_target << " failed! :(" << std::endl;
	return ;
}
