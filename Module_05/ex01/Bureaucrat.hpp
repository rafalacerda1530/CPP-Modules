#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat{

	private: 
	const std::string _name;
	int _grade;

	public:
	Bureaucrat(void);
	~Bureaucrat(void);
	Bureaucrat & operator=(Bureaucrat const & bureaucrat);
	Bureaucrat( const Bureaucrat & bureaucrat);
	Bureaucrat(std::string name, int grade);

	class GradeTooHighException  : public std::exception {
		virtual const char* what( void ) const throw();
	};

	class GradeTooLowException : public std::exception {
		virtual const char* what( void ) const throw();
	};

	void checkHigh(void);
	void decrement(void);
	void increment(void);
	int getGrade(void) const;
	std::string getName(void) const;
	void signForm(Form& form);

};

std::ostream & operator<<(std::ostream& o, const Bureaucrat& i);

#endif 