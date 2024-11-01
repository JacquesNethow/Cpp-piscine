#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>


class RobotomyRequestForm : public AForm 
{
public:

  RobotomyRequestForm(void);


  RobotomyRequestForm(const std::string &target);

  RobotomyRequestForm(const RobotomyRequestForm &other);

  virtual ~RobotomyRequestForm(void);

  RobotomyRequestForm &operator=(const RobotomyRequestForm &other);

  const std::string &getTarget(void) const;

  void setTarget(const std::string &target);

  void execute(const Bureaucrat &executor) const;

private:
  const std::string target; 
};

#endif