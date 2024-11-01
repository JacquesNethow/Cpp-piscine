#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	
	std::cout << "Cat default constructor called 🐈🐈🐈" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat Copy constructor called 🐈🐈🐈"<< std::endl;
	this->brain = new Brain();
	*this = other;
}

Cat::~Cat(void) 
{
  	std::cout << "Cat destructor called 🐈🐈🐈" << std::endl;
	delete this->brain;
}

Cat &Cat::operator=(const Cat &other) 
{
  	this->type = other.type;

	std::cout << "Cat assignment operator called 🐈🐈🐈" << std::endl;
	*(this->brain)= *(other.brain);
	return (*this);
}

void Cat::makeSound() const 
{
  	std::cout << "The Cat cries out loud: ""MEEOOOWWWWWW!!"" 🐱🐱🐱" << std::endl;
}

std::string	Cat::getIdeas(int index) {
	return (this->brain->getIdeas(index));
}

void	Cat::setIdeas(int index, std::string idea){
	return (this->brain->setIdeas(index, idea));
}