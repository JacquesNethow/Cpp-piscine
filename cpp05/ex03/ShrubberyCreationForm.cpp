#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm() 
{
  	this->setName("Shrubbery Creation Form Template");
 	this->set_Sign_Required_Grade(145);
  	this->set_Execute_Required_Grade(137);
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm(), target(target) 
	{
  	this->setName("Shrubbery Creation Form - " + target);
  	this->set_Sign_Required_Grade(145);
  	this->set_Execute_Required_Grade(137);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
    : AForm(), target(other.getTarget()) 
	{
  	this->setName(other.getName());
  	this->set_Sign_Required_Grade(145);
  	this->set_Execute_Required_Grade(137);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) 
{
  	if (this != &other) 
	{
    	this->setName(other.getName());
    	this->setTarget(other.getTarget());
  	}
  	return (*this);
}

const std::string &ShrubberyCreationForm::getTarget(void) const 
{
  	return (this->target);
}

void ShrubberyCreationForm::setTarget(const std::string &target) 
{
  	const_cast<std::string &>(this->target) = target;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const 
{
  	std::ofstream fout;

  	if (!this->getIs_Signed()) 
	{
    	throw AForm::FormIsUnsigned();
  	}
  	if (executor.getGrade() > this->getExecute_Required_Grade()) 
	{
    	throw AForm::GradeTooLowException();
  	}
  	fout.open((target + "_shrubbery").c_str());
  	if (fout.fail()) 
	{
    	throw ShrubberyCreationForm::ShrubberyCreationError();
  	}
  	fout << "               ,@@@@@@@,\n \
       ,,,.   ,@@@@@@/@@,  .oo8888o.\n \
    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n \
   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n \
   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n \
   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n \
   `&%\\ ` /%&'    |.|        \\ '|8'\n \
       |o|        | |         | |\n \
       |.|        | |         | |\n \
     \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\\\n";

  	fout.close();
}

const char *ShrubberyCreationForm::ShrubberyCreationError::what(void) const throw() 
{
  	return ("the Shrubbery tree file could not be created");
}