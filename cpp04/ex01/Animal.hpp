#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal 
{
	public:

	Animal(void);

	Animal(const Animal &other);

	virtual ~Animal(void);

	Animal &operator=(const Animal &other);

	virtual void makeSound() const;

	std::string getType() const;

	protected:
	
	std::string type;
};

#endif