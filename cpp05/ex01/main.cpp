#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(void)
{
	Form		form("form_01", 10, 20);
	Form		form2("form_01", 100, 130);

	Bureaucrat	josh("Josh", 5);
	Bureaucrat	ada("Ada", 15);

	ada.signForm(form);
	josh.signForm(form);
	std::cout << form << std::endl;
	std::cout << form2 << std::endl;

	return (0);
}
