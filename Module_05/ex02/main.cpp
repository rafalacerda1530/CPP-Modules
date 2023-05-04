#include "Bureaucrat.hpp"
#include "Aform.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void){

	try{
		std::cout << "--------------SHRUBBERY CREATION---------------" << std::endl;
		ShrubberyCreationForm gama("Gama");
		Bureaucrat rene("René Descartes", 1);
		gama.beSigned(rene); 
		gama.execute(rene);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
 
	std::cout << "--------------PRESIDENTIAL PARDON---------------" << std::endl;
	try {
		PresidentialPardonForm form("Alfa");
		Bureaucrat rene = Bureaucrat("Rene", 1);
		form.beSigned(rene);
		rene.execute_form( form );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "--------------ROBOTOMY---------------" << std::endl;
	try {
		RobotomyRequestForm form("Robo");
		Bureaucrat grade = Bureaucrat("Grey", 1);
		form.beSigned(grade);
		grade.execute_form( form );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return ( 0 );
}
