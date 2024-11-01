#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main (void) {
	
	//
	//AAnimal *egg = new AAnimal();

	Dog 	*doggy = new Dog();
	Cat 	*garfield = new Cat();

	std::cout << std::endl;
	std::cout << "- AAnimal test -" << std::endl;

	std::cout << doggy->getType() << std::endl;
	std::cout << garfield->getType() << std::endl;

	garfield->makeSound();
	doggy->makeSound();
	std::cout << std::endl;

	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			garfield->setIdeas(i,"I am Alive ❤️  ❤️  ❤️");
		else
			garfield->setIdeas(i,"I am Dead ☠️  ☠️  ☠️");

	}

	std::cout << "Getting index 10: "<<garfield->getIdeas(10) << std::endl;
	std::cout << "Getting index 99: "<<garfield->getIdeas(99) << std::endl;
	std::cout << std::endl;


	delete doggy;
	delete garfield;
	
	return (0);
}