#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Dog default constructor called 🐕🐕🐕" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog Copy constructor called 🐕🐕🐕"<< std::endl;
	this->brain = new Brain();
	*this = other;
}

Dog::~Dog(void) 
{
  	std::cout << "Dog destructor called 🐕🐕🐕" << std::endl;
  	delete this->brain;
}

Dog &Dog::operator=(const Dog &other) 
{
  	this->type = other.type;

  	std::cout << "Dog assignment operator called 🐕🐕🐕" << std::endl;
  	*(this->brain)= *(other.brain);
  	return (*this);
}

void Dog::makeSound() const 
{
  	std::cout << "The Dog cries out loud: ""WOOOOF! WOOOF! WOOOF!"" 🐶🐶🐶" << std::endl;
}

std::string	Dog::getIdeas(int index) {
	return (this->brain->getIdeas(index));
}

void	Dog::setIdeas(int index, std::string idea){
	return (this->brain->setIdeas(index, idea));
}