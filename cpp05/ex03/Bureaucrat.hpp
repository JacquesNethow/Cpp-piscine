#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <stdexcept>
# include <iostream>
# include <iomanip>

class	AForm;

class	Bureaucrat
{
	public:

	Bureaucrat(void);

	Bureaucrat(std::string name, int grade);

	Bureaucrat(Bureaucrat const &other);

	~Bureaucrat(void);

	Bureaucrat & operator=(Bureaucrat const &other);

	void	error_check(void) const;

	void	signAForm(AForm & Aform);

	void 	executeForm(AForm &f) const;

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char	*what(void) const throw();
	};

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char	*what(void) const throw();
	};

	std::string	getName(void) const;

	int			getGrade(void) const;

	void		setGrade(int grade);

	void		increment_Grade(void);

	void		decrement_Grade(void);

	private:

	int					grade;

	std::string const	name;

};

std::ostream &operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif