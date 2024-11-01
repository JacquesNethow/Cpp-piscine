#ifndef PRESIDENTIALPARDONREQUEST_HPP
# define PRESIDENTIALPARDONREQUEST_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm 
{
	public:
 
  	PresidentialPardonForm(void);

	PresidentialPardonForm(const std::string &target);

 	PresidentialPardonForm(const PresidentialPardonForm &other);

  	virtual ~PresidentialPardonForm(void);

  	PresidentialPardonForm &operator=(const PresidentialPardonForm &other);

  	const std::string &getTarget(void) const;

  	void setTarget(const std::string &target);

  	virtual void execute(const Bureaucrat &executor) const;

	private:

  	const std::string target;
};

#endif