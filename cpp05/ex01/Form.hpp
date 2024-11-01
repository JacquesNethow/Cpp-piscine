#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form 
{
	public:
	Form(void);

	Form(std::string name, int sign_Required_Grade, int execute_Required_Grade);

    Form(const Form &other);

	~Form();
		
    Form& operator=(const Form &other);

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

	void beSigned(const Bureaucrat &bureaucrat);

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

std::ostream& operator<<( std::ostream &out, const Form &f );

#endif