#include "Span.hpp"

Span::Span( void ) {}  

Span::Span(unsigned int numberOfElements) : numberOfElements(numberOfElements) {}  

Span::Span(const Span &spanToCopy)
{
	*this = spanToCopy;  
}

Span::~Span( void ) {} 

Span &Span::operator=(const Span &other)
{
	if (this == &other)
		return (*this);

	this->numberOfElements = other.numberOfElements;  
	this->data = other.data;

	return *this;
}

void Span::addNumber(int number)
{
	if (this->data.size() >= this->numberOfElements)
	{
		throw Span::invalidOpException(); 
	}
	this->data.push_back(number);  
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->data.size() + std::distance(begin, end) > this->numberOfElements)
	{
		throw Span::invalidOpException(); 
	}
	this->data.insert(this->data.end(), begin, end); 
}

int Span::shortestSpan( void )
{
	if (this->data.size() <= 1)
		throw Span::invalidOpException();

	std::vector<int> tmp = this->data;
	std::sort(tmp.begin(), tmp.end());
	int shortest = tmp[1] - tmp[0];

	for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end() - 1; ++it)
	{
		if (*(it + 1) - *it < shortest)
			shortest = *(it + 1) - *it;  
	}

	return shortest;
}

int Span::longestSpan( void )
{
	if (this->data.size() <= 1)
		throw Span::invalidOpException();

	std::vector<int> tmp = this->data;
	std::sort(tmp.begin(), tmp.end());

	return tmp[tmp.size() - 1] - tmp[0]; 
}

int Span::getNumberOfElements() const
{
	return this->numberOfElements;
}

const std::vector<int> &Span::getNumbers() const
{
	return this->data;
}

const char* Span::invalidOpException::what() const throw()
{
	return ("Invalid operation!");
}