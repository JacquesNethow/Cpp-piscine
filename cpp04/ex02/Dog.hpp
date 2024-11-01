#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog : public AAnimal
{
	public:

	Dog(void);

	Dog(const Dog &other);

	~Dog(void);

	Dog &operator=(const Dog &other);

	void makeSound(void) const;

	std::string	getIdeas(int index);
	void		setIdeas(int index, std::string idea);

	private:
	
	Brain *brain;
};

#endif