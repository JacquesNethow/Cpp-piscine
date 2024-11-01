#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>

Base *generate(void);
void identify(Base* p);
void identify(Base& p);

int main(void) {
	Base *b;

  	std::srand(time(NULL));
  	for (int i = 0; i < 4; i++) 
  	{
    	b = generate();
    	std::cout << "Identify by pointer" << std::endl;
    	identify(b);
    	std::cout << "Identify by reference" << std::endl;
    	identify(*b);
    	delete b;
  	}

  	return (0);
}

Base *generate(void) 
{
	
	int 			classType;
  	Base 			*random;
  	std::string	subclasses("ABC");

  	classType = rand() % 3;
  	switch (classType) 
  	{
  		case (0):
    		random = new A();
    		break;
 		 case (1):
   			random = new B();
    		break;
  		case (2):
    		random = new C();
    		break;
  		default:
    		random = NULL;
    		break;
  	}
  	std::cout << "A new random " << subclasses[classType] << " class has been generated." << std::endl;
  
	return (random);
}

void identify(Base *base) 
{
  	if (dynamic_cast<A *>(base) != NULL) 
	{
    	std::cout << "A" << std::endl;
    	return;
  	}
  	if (dynamic_cast<B *>(base) != NULL) 
	{
    	std::cout << "B" << std::endl;
    	return;
  	}
  	if (dynamic_cast<C *>(base) != NULL) 
	{
    	std::cout << "C" << std::endl;
    	return;
  	}

  	std::cerr << "Error: invalid pointer type." << std::endl;
}

void identify(Base &base) 
{
  	try 
	{
    	(void)dynamic_cast<A &>(base);
    	std::cout << "A" << std::endl;
  	} 
	catch (std::exception &e){}

  	try 
	{
    	(void)dynamic_cast<B &>(base);
    	std::cout << "B" << std::endl;
  	} 
	catch (std::exception &e){}

  	try 
	{
    	(void)dynamic_cast<C &>(base);
    	std::cout << "C" << std::endl;
  	}
	catch (std::exception &e){}
}