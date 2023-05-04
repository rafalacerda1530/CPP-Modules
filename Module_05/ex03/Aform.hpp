#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Aform{
	private:
	const std::string _formName;
	const int _formGrade;
	bool _signed;
	const int _formGradeExec;

	public:
	Aform(void);
	virtual ~Aform(void);
	Aform(std::string name, int formGrade, int formGradeExec);
	Aform & operator=(Aform const & form);
	Aform(const Aform& obj);
	std::string getName(void) const;
	bool getSigned(void) const;
	int getGradeExec(void) const;
	int getFormGrade(void) const;
	void beSigned(Bureaucrat& bureaucrat);
	void checkGrade(void);
	void checkExecutor(const Bureaucrat& bureaucrat) const;
	virtual void	execute(const Bureaucrat& executor) const = 0;

	class GradeTooHighException  : public std::exception {
		virtual const char* what( void ) const throw();
	};

	class GradeTooLowException : public std::exception {
		virtual const char* what( void ) const throw();
	};

	class NotSignedException : public std::exception
	{
		virtual const char* what(void) const throw();
	};

};

std::ostream & operator<<( std::ostream & o, Aform const & rhs );

#endif 