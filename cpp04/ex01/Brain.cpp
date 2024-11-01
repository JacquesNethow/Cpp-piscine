#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called 🧠🧠🧠" << std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "Brain copy constructor called 🧠🧠🧠" << std::endl;
	*this = other;
}

Brain::~Brain() {
	std::cout << "Brain destructor called 🧠🧠🧠" << std::endl;
}

Brain & Brain::operator=(const Brain &other) {
	std::cout << "Brain copy assignment operator called 🧠🧠🧠" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

std::string	Brain::getIdeas(int index) {
	if (index >= 0 && index < 100)
		return (this->ideas[index]);
	else
		return ("");
}

void	Brain::setIdeas(int index, std::string idea){
	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
	else
		std::cout << "Not within ideas range!" << std::endl;
}