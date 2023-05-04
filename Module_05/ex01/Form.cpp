#include "Form.hpp"

Form::Form(void) : _formName("Bradoc"), _formGrade(150), _signed(false), _formGradeExec(150){
	std::cout << "Default constructor Form called" << std::endl;
	return ;
}

Form::~Form(void){
	std::cout << "Default Destructor Form called" << std::endl;
	return ;
}

Form::Form(std::string name, int formGrade, int formGradeExec):
	_formName(name), _formGrade(formGrade), _signed(false), _formGradeExec(formGradeExec)
{
	checkGrade();
	std::cout
		<< "Form "
		<< getName()
		<< " Created "
		<< *this
		<< std::endl;
	return;
}

Form & Form::operator=(Form const & form){
	std::cout << "copy operator Form called" << std::endl;
	this->_signed = form.getSigned();
	return (*this);
}

Form::Form(const Form& obj) :
	_formName(obj.getName()), _formGrade(getFormGrade()),
	_signed(getSigned()), _formGradeExec(getGradeExec())
{
	checkGrade();
	std::cout << "copy constructor Form called" << std::endl;
	*this = obj;
	return ;
}

std::ostream & operator<<( std::ostream & o, Form const & rhs ) {
	o << "Name: " << rhs.getName() << std::endl;
	o << "Signed: " << rhs.getSigned() << std::endl;
	o << "Grade Exec: " << rhs.getGradeExec() << std::endl;
	o << "Grade required: " << rhs.getFormGrade() << std::endl;
	return ( o );
}

std::string Form::getName(void) const{
	return(this->_formName);
}

bool Form::getSigned(void) const{
	return(this->_signed);
}

int Form::getGradeExec(void) const{
	return(this->_formGradeExec);
}

int Form::getFormGrade(void) const{
	return(this->_formGrade);
}

const char * Form::GradeTooHighException::what(void) const throw(){
	return(" Grade is too high");
}

const char * Form::GradeTooLowException::what(void) const throw(){
	return(" Grade is too low");
}

void Form::beSigned(Bureaucrat & bureaucrat){
	if (bureaucrat.getGrade() > this->_formGradeExec)
		throw GradeTooLowException();
	this->_signed = true;
}

void Form::checkGrade(void){
	if(this->_formGrade < 1 || this->_formGradeExec < 1)
		throw Form::GradeTooHighException();
	if (this->_formGrade > 150 || this->_formGradeExec > 150)
		throw Form::GradeTooLowException();
}