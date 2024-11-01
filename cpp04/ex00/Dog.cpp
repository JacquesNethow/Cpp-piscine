#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";

	std::cout << "Dog default constructor called 🐕🐕🐕" << std::endl;
}

Dog::Dog(const Dog &other)
{
	*this = other;

	std::cout << " Dog Copy constructor called 🐕🐕🐕"<< std::endl;
}

Dog::~Dog(void) 
{
  std::cout << "Dog destructor called 🐕🐕🐕" << std::endl;
}

Dog &Dog::operator=(const Dog &other) 
{
  this->type = other.type;

  std::cout << "Dog assignment operator called 🐕🐕🐕" << std::endl;
  return (*this);
}

void Dog::makeSound() const 
{
  std::cout << "The Dog cries out loud: ""WOOOOF! WOOOF! WOOOF!"" 🐶🐶🐶" << std::endl;
}