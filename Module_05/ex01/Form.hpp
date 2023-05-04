#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	private:
	const std::string _formName;
	const int _formGrade;
	bool _signed;
	const int _formGradeExec;

	public:
	Form(void);
	~Form(void);
	Form(std::string name, int formGrade, int formGradeExec);
	Form & operator=(Form const & form);
	Form(const Form& obj);
	std::string getName(void) const;
	bool getSigned(void) const;
	int getGradeExec(void) const;
	int getFormGrade(void) const;
	void beSigned(Bureaucrat& bureaucrat);
	void checkGrade(void);

	class GradeTooHighException  : public std::exception {
		virtual const char* what( void ) const throw();
	};

	class GradeTooLowException : public std::exception {
		virtual const char* what( void ) const throw();
	};



};

std::ostream & operator<<( std::ostream & o, Form const & rhs );

#endif 