#include "Aform.hpp"


Aform::Aform(void) : _formName("Bradoc"), _formGrade(150), _signed(false), _formGradeExec(150){
	std::cout << "Default constructor Form called" << std::endl;
	return ;
}

Aform::~Aform(void){
	std::cout << "Default Destructor Form called" << std::endl;
	return ;
}

Aform::Aform(std::string name, int formGrade, int formGradeExec):
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

Aform & Aform::operator=(Aform const & form){
	std::cout << "copy operator Form called" << std::endl;
	this->_signed = form.getSigned();
	return (*this);
}

Aform::Aform(const Aform& obj) :
	_formName(obj.getName()), _formGrade(getFormGrade()),
	_signed(getSigned()), _formGradeExec(getGradeExec())
{
	checkGrade();
	std::cout << "copy constructor Form called" << std::endl;
	*this = obj;
	return ;
}

std::ostream & operator<<( std::ostream & o, Aform const & rhs ) {
	o << "Name: " << rhs.getName() << std::endl;
	o << "Signed: " << rhs.getSigned() << std::endl;
	o << "Grade Exec: " << rhs.getGradeExec() << std::endl;
	o << "Grade required: " << rhs.getFormGrade() << std::endl;
	return ( o );
}

std::string Aform::getName(void) const{
	return(this->_formName);
}

bool Aform::getSigned(void) const{
	return(this->_signed);
}

int Aform::getGradeExec(void) const{
	return(this->_formGradeExec);
}

int Aform::getFormGrade(void) const{
	return(this->_formGrade);
}

const char * Aform::GradeTooHighException::what(void) const throw(){
	return(" Grade is too high");
}

const char * Aform::GradeTooLowException::what(void) const throw(){
	return(" Grade is too low");
}

const char* Aform::NotSignedException::what(void) const throw()
{
	return ("Form is not signed...");
}


void Aform::beSigned(Bureaucrat & bureaucrat){
	if (bureaucrat.getGrade() > this->_formGradeExec)
		throw GradeTooLowException();
	this->_signed = true;
}

void Aform::checkGrade(void){
	if(this->_formGrade < 1 || this->_formGradeExec < 1)
		throw Aform::GradeTooHighException();
	if (this->_formGrade > 150 || this->_formGradeExec > 150)
		throw Aform::GradeTooLowException();
}

void Aform::checkExecutor(const Bureaucrat& bureaucrat) const{
	if (bureaucrat.getGrade() > getGradeExec())
		throw GradeTooLowException();
	else if(getSigned() == false)
		throw NotSignedException();
	std::cout
		<< bureaucrat.getName()
		<< " executed "
		<< getName()
		<< std::endl;
}

