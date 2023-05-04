#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Bradoc"), _grade(150){
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat(void){
	std::cout << "Default destructor called" << std::endl;
	return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & bureaucrat){
	std::cout << "Copy Assignemt Bureaucrat called" << std::endl;
	this->_grade = bureaucrat._grade;
	return (*this);
} 

Bureaucrat::Bureaucrat(Bureaucrat const & bureaucrat) {
	std::cout << "Copy Constructor Bureaucrat called" << std::endl;
	*this = bureaucrat;
	return ; 
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
	return;
}

std::string Bureaucrat::getName(void) const{
	return(this->_name);
}

int Bureaucrat::getGrade(void) const{
	return(this->_grade);
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw(){
	return("Bureaucrat grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw(){
	return("Bureaucrat grade is too Low");
}

void Bureaucrat::increment(void){
	this->_grade--;
	checkHigh();
}

void Bureaucrat::decrement(void){
	this->_grade++;
	checkHigh();
}

void Bureaucrat::checkHigh(void){
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream & operator<<(std::ostream& o, Bureaucrat const & i){
	o
		<< i.getName()
		<< ", bureaucrat grade "
		<< i.getGrade()
		<< std::endl;;
	return o;
} 

void Bureaucrat::signForm(Form& form){
	try{
		if (form.getSigned())
			std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch( std::exception & e )  {
		std::cout << this->_name << "couldn't sign " << form.getName() << " because " << e.what();
	}
	return;
}