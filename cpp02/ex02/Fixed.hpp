#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include<cmath>

class Fixed {
public:
// Construtores
Fixed(void);
Fixed(const int integer);
Fixed(const float floatPoint);
Fixed( const Fixed &other);
// Desconstrutor
~Fixed(void);
// Overload - assignment
Fixed &operator=(const Fixed &other);
// Overload - Comparison
bool	operator>(const Fixed &other) const;
bool	operator<(const Fixed &other) const;
bool	operator>=(const Fixed &other) const;
bool	operator<=(const Fixed &other) const;
bool	operator==(const Fixed &other) const;
bool	operator!=(const Fixed &other) const;
//  Overload - Arithmetic
Fixed	operator+(const Fixed &other) const;
Fixed	operator-(const Fixed &other) const;
Fixed	operator*(const Fixed &other) const;
Fixed	operator/(const Fixed &other) const;
//	Overload - Increment and Decrement 
Fixed	&operator++(void);
Fixed	operator++(int);
Fixed	&operator--(void);
Fixed	operator--(int);
// Static funcs
static Fixed	&min(Fixed &a, Fixed &b);
static const Fixed	&min(const Fixed &a, const Fixed &b);
static Fixed	&max(Fixed &a, Fixed &b);
static const Fixed	&max(const Fixed &a, const Fixed &b);
// Funcs
int getRawBits(void) const;
void setRawBits(int const raw);
float toFloat( void ) const;
int toInt( void ) const;

private:
	static const int fracBits = 8;
	int rawBits;
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);

#endif
