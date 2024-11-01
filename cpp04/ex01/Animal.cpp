#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal default constructor called 🥚🥚🥚"<< std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;

	std::cout << "Animal Copy constructor called 🥚🥚🥚"<< std::endl;
}

Animal::~Animal(void) 
{
  std::cout << "Animal destructor called 🥚🥚🥚" << std::endl;
}

Animal &Animal::operator=(const Animal &other) 
{
  this->type = other.type;

  std::cout << "Animal assignment operator called 🥚🥚🥚" << std::endl;
  return (*this);
}

void Animal::makeSound() const 
{
  std::cout << "The animal cries out loud, but the sound it's unrecognizable 🛸🛸🛸" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}