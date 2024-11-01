#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <sstream>

class ScalarConverter
{
	private:

	enum ScalarTypes 
	{
    	INVALID = -1,
    	CHAR,
    	INT,
    	FLOAT,
    	DOUBLE,
    	SCALARTYPES_COUNT,
  	};

	ScalarConverter(void);
	ScalarConverter(const ScalarConverter &other);
	~ScalarConverter(void);
	ScalarConverter &operator=(const ScalarConverter &other);

	//get type func
	static int getScalarType(const std::string &literal);
	
	//Find type funcs
	static bool isChar(const std::string &literal);
  	static bool isInt(const std::string &literal);
  	static bool isFloat(const std::string &literal);
  	static bool isDouble(const std::string &literal);

	//Convert funcs
  	static void convertInt(const std::string &literal);
  	static void convertChar(const std::string &literal);
  	static void convertFloat(const std::string &literal);
  	static void convertDouble(const std::string &literal);

  	static std::string displayChar(int c);

	//check overflow funcs
  	static bool floatOverflowsInt(float f);
  	static bool doubleOverflowsInt(double d);

	public:

	static void convert(const std::string &literal);

	class InvalidTypeException : public std::exception 
	{
  		public:

    	const char *what(void) const throw();
  	};
};

#endif