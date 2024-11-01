#include "Bureaucrat.hpp"

static	void	put_BreaksLines(void) {
	std::cout << std::endl;
	std::cout << std::setw(64) << std::setfill('-') << "" << std::endl;
}

static	void	print_Bureaucrat(Bureaucrat &b) {
		std::cout << b << std::endl;
		put_BreaksLines();
}

int main(void) {
	Bureaucrat  Steve("Steve", 45);

	std::cout << "TEST 1" << std::endl;
	print_Bureaucrat(Steve);

	try {
		std::cout << "Try descrease by 130: " << Steve.getGrade() + 130 << std::endl;
		Steve.setGrade(Steve.getGrade() + 130);
	}
	catch (const std::exception &e) {
		std::cout << "Can't change your grade: " << e.what() << std::endl;
	}

	std::cout<< std::endl << "TEST 2" << std::endl;
	print_Bureaucrat(Steve);

	try {
		std::cout << "Try descrease by 10: " << Steve.getGrade() + 10 << std::endl;
		Steve.setGrade(Steve.getGrade() + 10);
	}
	catch (const std::exception &e) 
	{
		std::cout << "Can't change your grade: " << e.what() << std::endl;
	}
	
	std::cout << std::endl << "TEST 3" << std::endl;
	print_Bureaucrat(Steve);

	try {
		std::cout << "Try increase grade by 25: " << Steve.getGrade() - 25 << std::endl;
		Steve.setGrade(Steve.getGrade() - 25);
	}
	catch (const std::exception & e) {
		std::cout << "Can't change your grade: " << e.what() << std::endl;
	}
	
	std::cout << std::endl << "TEST 4" << std::endl;
	print_Bureaucrat(Steve);

	try {
		std::cout << "Try increase grade by 125: " << Steve.getGrade() - 125 << std::endl;
		Steve.setGrade(Steve.getGrade() - 125);
	}
	catch (const std::exception & e) {
		std::cout << "Can't change your grade: " << e.what() << std::endl;
	}

	std::cout << std::endl << "TEST 5" << std::endl;
	print_Bureaucrat(Steve);

	try {
		std::cout << "Try decrementing grade: " << Steve.getGrade() + 1 << std::endl;
		Steve.decrement_Grade();
	}
	catch (const std::exception & e) {
		std::cout << "Can't change your grade: " << e.what() << std::endl;
	}

	std::cout << std::endl << "TEST 6" << std::endl;
	print_Bureaucrat(Steve);

	try {
		Steve.setGrade(150);
		std::cout << "Setting grade to 150 and trying decrementing grade over the limit " << std::endl;
		Steve.decrement_Grade();
	}
	catch (const std::exception & e) {
		std::cout << "Can't change your grade: " << e.what() << std::endl;
	}

	std::cout << std::endl << "TEST 7" << std::endl;
	print_Bureaucrat(Steve);

	try {
		std::cout << "Try incrementing grade: " << std::endl;
		Steve.increment_Grade();
	}
	catch (const std::exception & e) {
		std::cout << "Can't change your grade: " << e.what() << std::endl;
	}

	std::cout << std::endl << "TEST 8" << std::endl;
	print_Bureaucrat(Steve);

	try {
		Steve.setGrade(1);
		std::cout << "Setting grade to 1 and trying incrementing grade over the limit " << std::endl;
		Steve.increment_Grade();
	}
	catch (const std::exception & e) {
		std::cout << "Can't change your grade: " << e.what() << std::endl;
	}

	std::cout << std::endl << "TEST 9" << std::endl;
	print_Bureaucrat(Steve);

	return (0);
}