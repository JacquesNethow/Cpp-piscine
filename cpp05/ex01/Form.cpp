#include "Form.hpp"

Form::Form(void) : name(""), is_Signed(false), sign_Required_Grade(150),
    	execute_Required_Grade(150) {}

Form::Form(const std::string name, int sign_Required_Grade, int execute_Required_Grade) 
		: name(name), is_Signed(false),
		sign_Required_Grade(sign_Required_Grade),
    	execute_Required_Grade(execute_Required_Grade) {}

Form::Form(const Form &other) : name(other.getName()), is_Signed(false),
		sign_Required_Grade(other.getSign_Required_Grade()),
    	execute_Required_Grade(other.getExecute_Required_Grade()) {}

Form::~Form(void) {}

Form &Form::operator=(const Form &other) 
{
	if (this != &other) 
  	{
    	this->setName(other.getName());
    	this->set_Sign_Required_Grade(other.getSign_Required_Grade());
    	this->set_Execute_Required_Grade(other.getExecute_Required_Grade());
  	}
	return (*this);
}

const std::string Form::getName(void) const 
{ 
	return (this->name); 
}

int Form::getSign_Required_Grade(void) const 
{
  	return (this->sign_Required_Grade);
}

int Form::getExecute_Required_Grade(void) const 
{
  	return (this->execute_Required_Grade);
}

void Form::setName(const std::string &name) 
{
  	const_cast<std::string &>(this->name) = name;
}

void Form::set_Sign_Required_Grade(int grade) 
{
  	if (grade < 1) {
    	throw Form::GradeTooHighException();
  	}
  	if (grade > 150) {
   		throw Form::GradeTooLowException();
	}
  	const_cast<int &>(this->sign_Required_Grade) = grade;
}

void Form::set_Execute_Required_Grade(int grade) 
{
  	if (grade < 1) {
    	throw Form::GradeTooHighException();
  	}
  	if (grade > 150) {
    	throw Form::GradeTooLowException();
  	}
  	const_cast<int &>(this->execute_Required_Grade) = grade;
}

void Form::beSigned(const Bureaucrat &b) 
{
  	if (b.getGrade() > this->getSign_Required_Grade()) {
    	throw Form::GradeTooLowException();
  	}
  	this->is_Signed = true;
}

bool Form::getIs_Signed(void) const 
{ 
	return (this->is_Signed); 
}

const char *Form::GradeTooHighException::what(void) const throw() 
{
	return "Grade is too high";
}

const char *Form::GradeTooLowException::what(void) const throw() 
{
	return "Grade is too low";
}

std::ostream &operator<<(std::ostream &out, const Form &f) 
{
	out << f.getName() << (f.getIs_Signed() ? "(signed)" : "(unsigned)")
     	<< ", required signing grade " << f.getSign_Required_Grade()
    	<< ", required execution grade " << f.getExecute_Required_Grade();
  	return (out);
}