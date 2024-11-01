#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include<cmath>

class Fixed {
public:

Fixed(void);

Fixed(const int integer);

Fixed(const float floatPoint);

Fixed( const Fixed &other);

~Fixed(void);

Fixed &operator=(const Fixed &other);

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
