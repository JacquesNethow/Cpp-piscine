#include "Fixed.hpp"

Fixed::Fixed(void) : rawBits(0) 
{
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) {
  std::cout << "Int constructor called" << std::endl;
  this->rawBits = n << this->fracBits;
}

Fixed::Fixed(const float f) {
  std::cout << "Float constructor called" << std::endl;
  this->rawBits = roundf(f * (1 << this->fracBits));
}

Fixed::Fixed(const Fixed &other) 
{
  std::cout << "Copy constructor called" << std::endl;
  *this = other;
}

Fixed &Fixed::operator=(const Fixed &other) 
{
  std::cout << "Copy assignment operator called" << std::endl;
  this->setRawBits(other.getRawBits());
  return (*this);
}

Fixed::~Fixed(void)
 {
    std::cout << "Destructor called" << std::endl; 
}

int Fixed::getRawBits(void) const 
{
  return (this->rawBits);
}

void Fixed::setRawBits(const int rawBits) 
{
    this->rawBits = rawBits; 
}
int Fixed::toInt(void) const 
{ 
    return (this->rawBits >> this->fracBits); 
}

float Fixed::toFloat(void) const 
{
  return (static_cast<float>(this->rawBits) / (1 << this->fracBits));
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
 {
  out << fixed.toFloat();
  return (out);
}