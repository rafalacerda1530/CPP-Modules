# include <iostream>
# include <string>
# include <cctype>

int main(void){
	std::string variable = "HI THIS IS BRAIN";
	std::string* stringPTR = &variable;
	std::string& stringREF = variable; 

	std::cout << "Memory Address String variable: " << &variable << std::endl;
	std::cout << "Memory Address String PTR: " << stringPTR << std::endl;
	std::cout << "Memory Address String PTR: " << &stringREF << std::endl;

	std::cout << "String variable: " << variable << std::endl;
	std::cout << "String PTR: " << *stringPTR << std::endl;
	std::cout << "String PTR: " << stringREF << std::endl;
}