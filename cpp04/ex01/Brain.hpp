#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	public:

	Brain();

	Brain(const Brain &cpy);

	~Brain();

	Brain & operator=(const Brain &cpy);

	std::string	getIdeas(int index);

	void		setIdeas(int index, std::string idea);

	private:

	std::string ideas[100];
};

#endif