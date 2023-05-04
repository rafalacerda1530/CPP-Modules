#include "Bureaucrat.hpp"

int main(void){
	try {
		std::cout << "Esse vai da bom bureucrat!" << std::endl;
		Form  formGood = Form("Art", 1, 15);
		Bureaucrat grade = Bureaucrat("Grey", 1);
		formGood.beSigned(grade);
		grade.signForm(formGood);
		std::cout << formGood;
		std::cout << grade;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "Esse vai da ruimmmmm bureucrat!" << std::endl;
		Form formBad = Form("Art", 2, 15);
		Bureaucrat grade = Bureaucrat("Grey", 16);
		formBad.beSigned(grade);
		grade.signForm(formBad);
		std::cout << formBad;
		std::cout << grade;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
