#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(void) : grade(75), name("Bob")
{
	this->error_check();
}

Bureaucrat::Bureaucrat(std::string name, int grade) : grade(grade), name(name)
{
	this->error_check();
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &other)
{
	this->grade = other.grade;
	return (*this);
}

void	Bureaucrat::error_check(void) const
{
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::signAForm(AForm &Aform)
{
  try {
    Aform.beSigned(*this);
    std::cout << this->getName() << " signed " << Aform.getName() << std::endl;
  } catch (std::exception &e) 
  {
    std::cout << this->getName() << " couldn't sign " << Aform.getName()
              << " because " << e.what() << std::endl;
  }
}

void Bureaucrat::executeForm(AForm &f) const 
{
  try 
  {
    f.execute(*this);
    std::cout << this->getName() << " executed " << f.getName() << std::endl;
  } catch (std::exception &e) 
  {
    std::cout << this->getName() << " couldn't execute " << f.getName()
              << " because " << e.what() << std::endl;
  }
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low.");
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high.");
}
std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void Bureaucrat::setGrade(int grade) 
{
  if (grade < 1) {
    throw Bureaucrat::GradeTooHighException();
  }
  if (grade > 150) {
    throw Bureaucrat::GradeTooLowException();
  }
  this->grade = grade;
}

void		Bureaucrat::increment_Grade(void)
{
	if (this->grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;
}

void		Bureaucrat::decrement_Grade(void)
{
	if (this->grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade++;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &other)
{
	out	<< "Name: " << other.getName() << std::endl
		<< "Grade: " << other.getGrade();
	return (out);
}