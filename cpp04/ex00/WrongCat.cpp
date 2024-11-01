#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called 🐅🐅🐅" << std::endl;

}

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;

	std::cout << " WrongCat Copy constructor called 🐅🐅🐅"<< std::endl;
}

WrongCat::~WrongCat(void) 
{
  std::cout << "WrongCat destructor called 🐅🐅🐅" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) 
{
  this->type = other.type;

  std::cout << "WrongCat assignment operator called 🐅🐅🐅" << std::endl;
  return (*this);
}

void WrongCat::makeSound() const 
{
  std::cout << "The WrongCat cries out loud: ""MEEOOOWWWWWW!!"" 🐯🐯🐯" << std::endl;
}