#ifndef SHRUBBERCREATIONFORM_HPP
# define SHRUBBERCREATIONFORM_HPP

#include <iostream>
#include "Aform.hpp"
#include <fstream>

class ShrubberyCreationForm : public Aform{
	private:
	std::string _target;

	public:
	ShrubberyCreationForm(void);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm & operator=( ShrubberyCreationForm const & shrubbery );
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& shrubbery);
	void	execute(const Bureaucrat& executor) const;
	
};

#endif 