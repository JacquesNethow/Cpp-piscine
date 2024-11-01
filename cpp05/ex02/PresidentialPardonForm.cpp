#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm() 
{
	this->setName("Presidential Pardon Form Template");
  	this->set_Sign_Required_Grade(25);
  	this->set_Execute_Required_Grade(5);
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : AForm(), target(target) 
{
  	this->setName("Presidential Pardon Form for " + target);
  	this->set_Sign_Required_Grade(25);
  	this->set_Execute_Required_Grade(5);
}

PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm &other)
    : AForm(), target(other.getTarget()) 
{
  	this->setName(other.getName());
  	this->set_Sign_Required_Grade(25);
  	this->set_Execute_Required_Grade(5);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &other) 
{
  	if (this != &other) 
  	{
    	this->setName(other.getName());
    	this->setTarget(other.getTarget());
  	}
  	return (*this);
}

const std::string &PresidentialPardonForm::getTarget() const 
{
  	return (this->target);
}

void PresidentialPardonForm::setTarget(const std::string &target) 
{
  	const_cast<std::string &>(this->target) = target;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const 
{
  	if (!this->getIs_Signed()) 
	{
    	throw AForm::FormIsUnsigned();
  	}
  	if (executor.getGrade() > this->getExecute_Required_Grade()) 
	{
    	throw AForm::GradeTooLowException();
  	}
  	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox"
        << std::endl;
}