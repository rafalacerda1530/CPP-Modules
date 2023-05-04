 #ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include "Aform.hpp"

class PresidentialPardonForm : public Aform {

private:
 
	std::string	_target;

public:

	PresidentialPardonForm( void );
	PresidentialPardonForm( std::string target );
	PresidentialPardonForm( PresidentialPardonForm const & rhs );
	~PresidentialPardonForm( void );
	PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs );

	void	execute( Bureaucrat const & executor ) const;
};

#endif