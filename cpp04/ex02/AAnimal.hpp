#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal 
{
	public:

	AAnimal(void);

	AAnimal(const AAnimal &other);

	virtual ~AAnimal(void);

	AAnimal &operator=(const AAnimal &other);

	virtual void makeSound() const = 0;

	std::string getType() const;

	protected:
	
	std::string type;
};

#endif