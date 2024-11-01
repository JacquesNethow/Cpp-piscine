#include "AForm.hpp"

AForm::AForm(void) : name(""), is_Signed(false), sign_Required_Grade(150),
    	execute_Required_Grade(150) {}

AForm::AForm(const std::string name, int sign_Required_Grade, int execute_Required_Grade) 
		: name(name), is_Signed(false),
		sign_Required_Grade(sign_Required_Grade),
    	execute_Required_Grade(execute_Required_Grade) {}

AForm::AForm(const AForm &other) : name(other.getName()), is_Signed(false),
		sign_Required_Grade(other.getSign_Required_Grade()),
    	execute_Required_Grade(other.getExecute_Required_Grade()) {}

AForm::~AForm(void) {}

AForm &AForm::operator=(const AForm &other) 
{
	if (this != &other) 
  	{
    	this->setName(other.getName());
    	this->set_Sign_Required_Grade(other.getSign_Required_Grade());
    	this->set_Execute_Required_Grade(other.getExecute_Required_Grade());
  	}
	return (*this);
}

const std::string AForm::getName(void) const 
{ 
	return (this->name); 
}

int AForm::getSign_Required_Grade(void) const 
{
  	return (this->sign_Required_Grade);
}

int AForm::getExecute_Required_Grade(void) const 
{
  	return (this->execute_Required_Grade);
}

void AForm::setName(const std::string &name) 
{
  	const_cast<std::string &>(this->name) = name;
}

void AForm::set_Sign_Required_Grade(int grade) 
{
  	if (grade < 1) {
    	throw AForm::GradeTooHighException();
  	}
  	if (grade > 150) {
   		throw AForm::GradeTooLowException();
	}
  	const_cast<int &>(this->sign_Required_Grade) = grade;
}

void AForm::set_Execute_Required_Grade(int grade) 
{
  	if (grade < 1) {
    	throw AForm::GradeTooHighException();
  	}
  	if (grade > 150) {
    	throw AForm::GradeTooLowException();
  	}
  	const_cast<int &>(this->execute_Required_Grade) = grade;
}

void AForm::beSigned(const Bureaucrat &b) 
{
  	if (b.getGrade() > this->getSign_Required_Grade()) {
    	throw AForm::GradeTooLowException();
  	}
  	this->is_Signed = true;
}

bool AForm::getIs_Signed(void) const 
{ 
	return (this->is_Signed); 
}

const char *AForm::GradeTooHighException::what(void) const throw() 
{
	return "Grade is too high";
}

const char *AForm::GradeTooLowException::what(void) const throw() 
{
	return "Grade is too low";
}

const char *AForm::FormIsUnsigned::what(void) const throw() 
{
  	return "the form is unsigned";
}

std::ostream &operator<<(std::ostream &out, const AForm &f) 
{
	out << f.getName() << (f.getIs_Signed() ? "(signed)" : "(unsigned)")
     	<< ", required signing grade " << f.getSign_Required_Grade()
    	<< ", required execution grade " << f.getExecute_Required_Grade();
  	return (out);
}