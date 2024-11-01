#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <iostream>
# include <iterator>
# include <vector>
# include <string>

class Span
{
private:
	unsigned int numberOfElements;
	std::vector<int> data;

	Span( void ); 

public:
	Span(unsigned int N); 
	Span(const Span &other);  
	virtual ~Span( void ); 
	Span &operator=(const Span &other); 

	void	addNumber(int number); 
	void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	int		shortestSpan( void ); 
	int		longestSpan( void );  

	int		getNumberOfElements() const;  
	const std::vector<int> &getNumbers() const; 

	class invalidOpException : public std::exception 
	{
		public:
			virtual const char *what() const throw();
	};
};

#endif