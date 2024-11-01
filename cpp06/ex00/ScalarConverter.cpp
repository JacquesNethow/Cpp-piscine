#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter(const ScalarConverter &other) 
{ 
	(void)other; 
}

ScalarConverter::~ScalarConverter(void) {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) 
{
  	(void)other;
  	return (*this);
}

void ScalarConverter::convert(const std::string &literal) 
{
  	int literalType = getScalarType(literal);

  	std::cout.setf(std::ios::fixed | std::ios::showpoint);
  	std::cout.precision(1);

  	switch (literalType) 
	{
  		case (INT):
    		convertInt(literal);
    		break;
  		case (CHAR):
    		convertChar(literal);
    		break;
  		case (FLOAT):
    		convertFloat(literal);
    		break;
  		case (DOUBLE):
    		convertDouble(literal);
    		break;
  		default:
    		throw InvalidTypeException();
    		break;
  	}
}

int ScalarConverter::getScalarType(const std::string &literal) 
{
  	if (isChar(literal))
    	return (CHAR);

  	if (isInt(literal))
    	return (INT);

   	if (isFloat(literal))
    	return (FLOAT);

  	if (isDouble(literal))
    	return (DOUBLE);

  	return (INVALID);
}

bool ScalarConverter::isChar(const std::string &literal) 
{
  	size_t len = literal.length();

  	if (len != 3) 
    	return (false);

  	return (literal[0] == '\'' && literal[len - 1] == '\'');
}

bool ScalarConverter::isInt(const std::string &literal) 
{
  	int i;
  	std::istringstream ss;

	ss.str(literal);
  	return ((ss >> i) && (ss.eof()));
}

bool ScalarConverter::isFloat(const std::string &literal) 
{
  	size_t len;

  	len = literal.length();
  	if (len < 2)
    	return (false);

  	return (isDouble(literal.substr(0, len - 1)) && literal.at(len - 1) == 'f');
}

bool ScalarConverter::isDouble(const std::string &literal) 
{
  	double d;
  	std::istringstream ss;
  	bool isNan = literal == "nan" || literal == "-nan";
  	bool isInf = literal == "inf" || literal == "-inf";

	if (isNan || isInf)
		return (true);

  	ss.str(literal);
  	return ((ss >> d) && (ss.eof()));
}

void ScalarConverter::convertChar(const std::string &literal) 
{
  	char c = literal[1];

  	std::cout << "char: " << displayChar(c) << std::endl
		<< "int: " << static_cast<int>(c) << std::endl
		<< "float: " << static_cast<float>(c) << "f" << std::endl
		<< "double: " << static_cast<double>(c) << "" << std::endl;
}

void ScalarConverter::convertInt(const std::string &literal) 
{
  	int i;
  	std::istringstream ss;

	ss.str(literal);
  	ss >> i;
  	std::cout << "char: " << displayChar(static_cast<int>(i)) << std::endl
		<< "int: " << i << std::endl
		<< "float: " << static_cast<float>(i) << "f" << std::endl
        << "double: " << static_cast<double>(i) << "" << std::endl;
}

void ScalarConverter::convertFloat(const std::string &literal) 
{
  	float f = std::strtof(literal.c_str(), NULL);
  	bool isNan = (literal.find("nanf") != std::string::npos);
  	bool isInf = (literal.find("inff") != std::string::npos);

  	if (isNan || isInf || floatOverflowsInt(f)) 
	{
    	std::cout << "char: Impossible" << std::endl
        	<< "int: Impossible" << std::endl;
  	} 
	else 
	{
    	std::cout << "char: " << displayChar(static_cast<int>(f)) << std::endl
        	<< "int: " << static_cast<int>(f) << std::endl;
  	}
  	std::cout << "float: " << f << "f" << std::endl
    	<< "double: " << static_cast<double>(f) << std::endl;
}

void ScalarConverter::convertDouble(const std::string &literal) 
{
  	double d = std::strtod(literal.c_str(), NULL);
  	bool isNan = (literal.find("nanf") != std::string::npos);
  	bool isInf = (literal.find("inff") != std::string::npos);

  	if (isNan || isInf || doubleOverflowsInt(d)) 
	{
    	std::cout << "char: Impossible" << std::endl
        	<< "int: Impossible" << std::endl;
  	} 
  	else 
  	{
    	std::cout << "char: " << displayChar(static_cast<int>(d)) << std::endl
        	<< "int: " << static_cast<int>(d) << std::endl;
  	}
  	std::cout << "float: " << d << "f" << std::endl
    	<< "double: " << static_cast<double>(d) << std::endl;
}

std::string ScalarConverter::displayChar(int c) 
{
  	std::stringstream ss;
  	bool isNullChar = c == '\0';
  	bool charOverflows = (c > 255);

  	if (isNullChar || charOverflows) 
    	return ("Impossible");
	
  	if (!std::isprint(c))
    	return ("Non displayable");

  	ss << "\'" << static_cast<char>(c) << "\'";
  	return (ss.str());
}

bool ScalarConverter::floatOverflowsInt(float f) {
  float intMax = 2.0f * static_cast<float>((std::numeric_limits<int>::max() / 2) + 1);

  if (f < intMax && (f - std::numeric_limits<int>::min()) > -1.0f)
    return (false);
  return (true);
}

bool ScalarConverter::doubleOverflowsInt(double d) 
{
  	double intMax = 2.0 * static_cast<double>((std::numeric_limits<int>::max() / 2) + 1);

  	if (d < intMax && (d - std::numeric_limits<int>::min()) > -1.0)
    	return (false);

  	return (true);
}

const char *ScalarConverter::InvalidTypeException::what(void) const throw() 
{
  return ("Invalid literal!!!\nPlease use a Char, int, float or a double!!!");
}