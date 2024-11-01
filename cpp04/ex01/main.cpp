#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main (void) {

	std::cout << "<< Testing half dogs and cats with Animal class >>" << std::endl;
	const Animal *farm[10];

	std::cout << std::endl;
	std::cout << "Constructors Dogs" << std::endl;

	for (int i = 0; i < 5; i++)
		farm[i] = new Dog();

	std::cout << std::endl;
	std::cout << "Constructors Cats" << std::endl;

	for (int i = 5; i < 10; i++)
		farm[i] = new Cat();
		
	std::cout << std::endl;
	std::cout << "Destructors Dogs" << std::endl;

	for (int i = 0; i < 5; i++)
		delete farm[i];
		
	std::cout << std::endl;
	std::cout << "Destructors Cats" << std::endl;

	for (int i = 5; i < 10; i++)
		delete farm[i];

	std::cout << std::endl;
	std::cout << "<< Testing default constructor >>"<<std::endl;
		
	Dog *dog = new Dog();
	Cat *cat = new Cat();
		
	dog->setIdeas(0, "WOOF WOOF 🐶🐶🐶🐶🐶🐶!");
	cat->setIdeas(0, "MEOWWWWWW 🐱🐱🐱🐱🐱🐱!");

	std::cout << std::endl;
	std::cout << dog->getIdeas(0) << std::endl;
	std::cout << cat->getIdeas(0) << std::endl;
	std::cout << std::endl;

	std::cout << "<< Testing copy constructor >>" << std::endl;
	Dog *cpyDog = new Dog(*dog);
	Cat *cpyCat = new Cat(*cat);

	std::cout << std::endl;
	std::cout << cpyDog->getIdeas(0) << std::endl;
	std::cout << cpyCat->getIdeas(0) << std::endl;
		
	cpyDog->setIdeas(0, "WOOF WOOF 🐕🐕🐕🐕🐕🐕!");
	cpyCat->setIdeas(0, "MEOWWWWWW 🐈🐈🐈🐈🐈🐈!");
		
	std::cout << std::endl;
	std::cout << cpyDog->getIdeas(0) << std::endl;
	std::cout << cpyCat->getIdeas(0) << std::endl;
	std::cout << std::endl;

	std::cout << "<< Testing filling in all ideas >>" << std::endl;
	
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			cat->setIdeas(i,"I am Alive ❤️  ❤️  ❤️");
		else
			cat->setIdeas(i,"I am Dead ☠️  ☠️  ☠️");

	}

	std::cout << "Getting index 10: "<<cat->getIdeas(10) << std::endl;
	std::cout << "Getting index 99: "<<cat->getIdeas(99) << std::endl;
	std::cout << std::endl;

	delete dog;
	delete cat;
	delete cpyDog;
	delete cpyCat;
	
	return (0);
}