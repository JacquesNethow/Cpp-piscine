#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class Cat : public Animal
{
	public:

	Cat(void);

	Cat(const Cat &other);

	~Cat(void);

	Cat &operator=(const Cat &other);

	void makeSound(void) const;
};

#endif