#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm() 
{
  	this->setName("Robotomy Request Form Template");
  	this->set_Sign_Required_Grade(72);
  	this->set_Execute_Required_Grade(45);
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : AForm(), target(target) 
{
  	this->setName("Robotomy Request Form - " + target);
  	this->set_Sign_Required_Grade(72);
  	this->set_Execute_Required_Grade(45);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
    : AForm(), target(other.getTarget()) 
{
  	this->setName(other.getName());
  	this->set_Sign_Required_Grade(72);
  	this->set_Execute_Required_Grade(45);
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

const std::string &RobotomyRequestForm::getTarget(void) const 
{
  	return (this->target);
}

void RobotomyRequestForm::setTarget(const std::string &target) 
{
  	const_cast<std::string &>(this->target) = target;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const 
{
  	if (!this->getIs_Signed()) 
  	{
    	throw AForm::FormIsUnsigned();
  	}
  	if (executor.getGrade() > this->getExecute_Required_Grade()) 
	{
    	throw AForm::GradeTooLowException();
  	}
  	std::cout << "* Bzzz Bzzzz *" << std::endl;
 	srand(time(NULL));
	 if (rand() % 2)
	{
		std::cout << this->getTarget()
			<< " has been robotomized successfully!!!\n";
	}
	else
		std::cout << this->getTarget() << " robotomization failed!!!\n";
}