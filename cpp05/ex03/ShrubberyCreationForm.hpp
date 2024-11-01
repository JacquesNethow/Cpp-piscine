#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
public:

  ShrubberyCreationForm(void);

  ShrubberyCreationForm(const std::string &target);

  ShrubberyCreationForm(const ShrubberyCreationForm &other);

  virtual ~ShrubberyCreationForm(void);

  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

  const std::string &getTarget(void) const;

  void setTarget(const std::string &target);

  virtual void execute(const Bureaucrat &executor) const;

  class ShrubberyCreationError : public std::exception 
  {
  public:

    const char *what() const throw();
  };

private:
  const std::string target;
};

#endif