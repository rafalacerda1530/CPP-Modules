# include "Harl.hpp"

int main(void){
	Harl harl = Harl();
	std::cout << "DEBUG" << std::endl;
	harl.complain("DEBUG");
	std::cout << "INFO" << std::endl;
	harl.complain("INFO");
	std::cout << "WARNING" << std::endl;
	harl.complain("WARNING");
	std::cout << "ERROR" << std::endl;
	harl.complain("ERROR");
	return (1);
}