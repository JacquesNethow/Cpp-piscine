#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat : public AAnimal
{
	public:

	Cat(void);

	Cat(const Cat &other);

	~Cat(void);

	Cat &operator=(const Cat &other);

	void makeSound(void) const;

	std::string	getIdeas(int index);
	void		setIdeas(int index, std::string idea);

	private:
	
	Brain *brain;
};

#endif