#include <iostream>
#include <string>
#include <ctype.h>
#include <cstdlib>
#include <climits>
#include <limits>

void convertChar(std::string str){
	if(str.length() == 1 && isalpha(str[0])){
		std::cout << "char: \'" << str << "\'" << std::endl;
		return ;
	}
	else if (str.length() > 1 && isalpha(str[1])){
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	char c = static_cast<char>(std::atoi(str.c_str()));
	if (isprint(c))
		std::cout << "char: \'" << c << "\'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void convertInt(std::string str){
	if (str.length() == 1 && isalpha(str[0])) {
		std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
		return ;
	}
	long int num = atol(str.c_str());

	if ((num != 0 && num >= INT_MIN && num <=  INT_MAX)
		|| (num == 0 && str.length() > 0 && str[0] == '0'))
		std::cout << "int: " << num << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
}

void	convertFloat( std::string str ){
	if (str.length() == 1 && isalpha( str[0] )) {
		std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
		return ;
	}
	double num = atof(str.c_str());
	if (num == 0 && str.length() != 1 && str[0] != '0') {
		std::cout << "float: nanf" << std::endl;
		return ;
	}
	else if (num == std::numeric_limits<float>::infinity())
		std::cout << "float: +inff" << std::endl;
	else if ((long double)num == (int)num)
		std::cout << "float: " << num << ".0f" << std::endl;
	else
		std::cout << "float: " << num << "f" << std::endl;

}

void	convertDouble( std::string str ) {
	if (str.length() == 1 && isalpha(str[0])) {
		std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
		return ;
	}
	double num = atof(str.c_str());
	if (str[0] != '0' && num == 0 && str.length() != 1) {
		std::cout << "double: nan" << std::endl;
		return ;
	}
	if (num == std::numeric_limits<convertFloat(argv[1]);() && str[0] == '-')
		std::cout << "double: -inf" << std::endl;
	else if (num == std::numeric_limits<double>::infinity())
		std::cout << "double: +inf" << std::endl;
	else if ((long double)num == (int)num)
		std::cout << "double: " << num << ".0" << std::endl;
	else
		std::cout << "double: " << num << std::endl;
}

int main(int argc, char *argv[]){
	if (argc != 2){
		std::cout << "Wrong Parameters!" << std::endl;
		return ( 1 );
	}
	convertChar(argv[1]);
	convertInt(argv[1]);
	convertFloat(argv[1]);
	convertDouble(argv[1]);
}
