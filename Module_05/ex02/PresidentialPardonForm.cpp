#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) :
	Aform( "PresidentialForm", 25, 5 ), _target( "Art" ) {
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) :
	Aform( "PresidentialForm", 25, 5 ), _target( target ) {
		return ; 
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & rhs ) :
	Aform( "PresidentialForm", 25, 5 ) {
	*this = rhs;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ) {
	this->_target = rhs._target;
	return ( *this );
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	this->checkExecutor(executor);
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
	return ;
}
