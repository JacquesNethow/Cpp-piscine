#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	
	std::cout << "Cat default constructor called 🐈🐈🐈" << std::endl;

}

Cat::Cat(const Cat &other)
{
	*this = other;

	std::cout << " Cat Copy constructor called 🐈🐈🐈"<< std::endl;
}

Cat::~Cat(void) 
{
  std::cout << "Cat destructor called 🐈🐈🐈" << std::endl;
}

Cat &Cat::operator=(const Cat &other) 
{
  this->type = other.type;

  std::cout << "Cat assignment operator called 🐈🐈🐈" << std::endl;
  return (*this);
}

void Cat::makeSound() const 
{
  std::cout << "The Cat cries out loud: ""MEEOOOWWWWWW!!"" 🐱🐱🐱" << std::endl;
}