#include "RPN.hpp"

static void wrongArgQuant(char *name)
{
	std::cout << "WRONG QUANTITY OF ARGUMENTS!!!" << std::endl
			  << "Please use it as follows: " << name << " \"Expression\"" << std::endl;
}

int main(int argc, char** argv) 
{
	if(argc != 2)
	{
		wrongArgQuant(argv[0]);
		return (1);
	}

	RPN	rpn;
	return (rpn.calculate(argv[1]));
}
