#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Aform("Shrubbery Form", 145, 137), _target("Bradoc"){
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
	return;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & shrubbery ) {
	this->_target = shrubbery._target;
	return ( *this );
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Aform("Shrubbery Form", 145, 137), _target(target){
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& shrubbery) : Aform("Shrubbery Form", 145, 137){
	*this = shrubbery;
	return ;
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const{
	
	std::ofstream file;
	std::string fileName = this->_target;;

	this->checkExecutor(executor);

	file.open((this->_target + "_shrubbery").c_str());
	if (!file.is_open())
	{
		std::cout << "Something wrong creating the _shrubbery file" << std::endl;
		file.close();
		return ;
	}

	file << "          &&& &&  & &&" << std::endl;
		file << "      && &\\/&\\|& ()|/ @, &&" << std::endl;
		file << "      &\\/(/&/&||/& /_/)_&/_&" << std::endl;
		file << "   &() &\\/&|()|/&\\/ '%' & ()" << std::endl;
		file << "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
		file << "&&   && & &| &| /& & % ()& /&&" << std::endl;
		file << " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
		file << "     &&     \\|||" << std::endl;
		file << "             |||" << std::endl;
		file << "             |||" << std::endl;
		file << "             |||" << std::endl;
		file << "       , -=-~  .-^- _" << std::endl;
		file << "aom90         `" << std::endl;
		file << std::endl;

	file.close();
}
