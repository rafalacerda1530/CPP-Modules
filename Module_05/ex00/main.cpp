#include "Bureaucrat.hpp"

int main(void){
	std::cout << std::endl;
	try {
		Bureaucrat gradeGood = Bureaucrat("Art", 12);
		std::cout << gradeGood;
		gradeGood.increment();
		gradeGood.checkHigh();
		std::cout << gradeGood;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout  << std::endl;
}
