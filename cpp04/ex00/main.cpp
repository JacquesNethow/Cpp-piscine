#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main (void) {
		
	//Animals test
	const Animal *egg = new Animal();
	const Animal *doggy = new Dog();
	const Animal *garfield = new Cat();

	std::cout << std::endl;
	std::cout << "- Animal test -" << std::endl;

	std::cout << doggy->getType() << std::endl;
	std::cout << garfield->getType() << std::endl;
	std::cout << egg->getType() << std::endl;

	garfield->makeSound();
	doggy->makeSound();
	egg->makeSound();
	std::cout << std::endl;

	delete egg;
	delete doggy;
	delete garfield;
	
	// Wrong Animal test
	std::cout << std::endl;
	std::cout << "- Wrong Animal test -" << std::endl;

	const WrongAnimal *wrong1 = new WrongAnimal();
	const WrongAnimal *wrong2 = new WrongCat();

	std::cout << std::endl;
	std::cout << wrong1->getType() << std::endl;
	std::cout << wrong2->getType() << std::endl;

	wrong1->makeSound();
	wrong2->makeSound();
	std::cout << std::endl;
		
	delete wrong1;
	delete wrong2;

	return (0);
}