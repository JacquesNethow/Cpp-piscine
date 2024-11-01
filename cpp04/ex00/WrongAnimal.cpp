#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
	std::cout << "Wrong Animal default constructor called 🐉🐉🐉"<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;

	std::cout << "Wrong animal Copy constructor called 🐉🐉🐉"<< std::endl;
}

WrongAnimal::~WrongAnimal(void) 
{
  std::cout <<"Wrong animal destructor called 🐉🐉🐉" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) 
{
  this->type = other.type;

  std::cout << "Wrong animal assignment operator called 🐉🐉🐉" << std::endl;
  return (*this);
}

void WrongAnimal::makeSound() const 
{
  std::cout << "The Wrong animal cries out loud, but the sound it's unrecognizable 🐲🐲🐲" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}