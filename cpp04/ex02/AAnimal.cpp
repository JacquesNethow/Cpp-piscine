#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("AAnimal")
{
	std::cout << "AAnimal default constructor called 🥚🥚🥚"<< std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	*this = other;

	std::cout << "AAnimal Copy constructor called 🥚🥚🥚"<< std::endl;
}

AAnimal::~AAnimal(void) 
{
  std::cout << "AAnimal destructor called 🥚🥚🥚" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other) 
{
  this->type = other.type;

  std::cout << "AAnimal assignment operator called 🥚🥚🥚" << std::endl;
  return (*this);
}

std::string AAnimal::getType() const
{
	return (this->type);
}