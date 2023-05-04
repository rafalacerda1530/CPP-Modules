#include "Bureaucrat.hpp"
#include "Aform.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"


int	main( void )
{
	{
		Intern someRandomIntern;
		Aform* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		Bureaucrat grade = Bureaucrat("Grey", 1);
		rrf->beSigned( grade );
		grade.execute_form( *rrf );
		delete rrf;
	}
	std::cout << std::endl;
	{
		Intern someRandomIntern;
		Aform* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		Bureaucrat grade = Bureaucrat("Grey", 1);
		rrf->beSigned( grade );
		rrf->execute( grade );
		delete rrf;
	}
	std::cout << std::endl;
	{
		Intern someRandomIntern;
		Aform* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		Bureaucrat grade = Bureaucrat("Grey", 1);
		rrf->beSigned( grade );
		rrf->execute( grade );
		delete rrf;
	}
	std::cout << std::endl;
	try	{
		Intern someRandomIntern;
		Aform* rrf;
		rrf = someRandomIntern.makeForm(" creation", "Bender");
		delete rrf;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try	{
		Intern someRandomIntern;
		Aform* rrf;
		rrf = someRandomIntern.makeForm(" creation", "");
		delete rrf;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}

}