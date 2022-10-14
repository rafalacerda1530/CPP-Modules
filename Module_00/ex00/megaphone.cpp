#include <iostream>

int main(int argc, char **argv)
{
	char msg;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else{
		for(int i = 1; argv[i]; i++){
			for (int j = 0; argv[i][j]; j++){
				msg = toupper(argv[i][j]);
				std::cout << msg;
			}
		}
		std::cout << std::endl;
	}
	return(0);
}
