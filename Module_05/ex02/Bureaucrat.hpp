#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Aform.hpp"


class Aform;

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
	void signForm(Aform& form);
	void execute_form(Aform& form);

};

std::ostream & operator<<(std::ostream& o, const Bureaucrat& i);

#endif 