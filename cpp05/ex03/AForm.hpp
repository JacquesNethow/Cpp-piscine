#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm 
{
	public:
	AForm(void);

	AForm(std::string name, int sign_Required_Grade, int execute_Required_Grade);

    AForm(const AForm &other);

	virtual ~AForm();
		
    AForm& operator=(const AForm &other);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char	*what(void) const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char	*what(void) const throw();
	};

	 class FormIsUnsigned : public std::exception 
	{
  		public:
    	const char *what(void) const throw();
	};
	
	void beSigned(const Bureaucrat &bureaucrat);

	virtual void execute(const Bureaucrat &executor) const = 0;

	void setName(const std::string &name);

	const std::string getName() const;

	bool getIs_Signed() const;

	int getSign_Required_Grade() const;

	void set_Sign_Required_Grade(int grade);

	int getExecute_Required_Grade() const;

	void set_Execute_Required_Grade(int grade);


	private:

		const std::string name;

		bool is_Signed;

		const int sign_Required_Grade;

		const int execute_Required_Grade;
};

std::ostream& operator<<( std::ostream &out, const AForm &f );

#endif