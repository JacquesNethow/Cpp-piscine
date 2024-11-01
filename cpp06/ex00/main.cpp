#include "ScalarConverter.hpp"

static void usage(const char *pname) 
{
  std::cerr << "Usage: " << pname << " LITERAL" << std::endl
            << std::endl
            << "Positional Arguments" << std::endl
            << "  LITERAL    A Literal C++ char, int, float or double."
            << std::endl;
}

int main(int argc, char **argv) 
{
	if (argc != 2) 
  	{
    	usage(*argv);
    	return (1);
  	}

  	try 
  	{
    	ScalarConverter::convert(argv[1]);
  	} 
  	catch (std::exception &e) 
	{
    	std::cerr << argv[0] << ": error: " << e.what() << std::endl;
  	}
	  
  	return (0);
}