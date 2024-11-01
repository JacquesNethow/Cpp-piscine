#include "Fixed.hpp"

Fixed::Fixed(void) : rawBits(0) 
{
  return ;
}

Fixed::Fixed(const int n) {
  this->rawBits = n << this->fracBits;
}

Fixed::Fixed(const float f) {
  this->rawBits = roundf(f * (1 << this->fracBits));
}

Fixed::Fixed(const Fixed &other) 
{
  *this = other;
}

Fixed::~Fixed(void)
{
  return ;
}

Fixed &Fixed::operator=(const Fixed &other) 
{
  this->setRawBits(other.getRawBits());
  return (*this);
}

bool Fixed::operator>(const Fixed &other) const 
{
  return (this->getRawBits() > other.getRawBits());
}


bool Fixed::operator<(const Fixed &other) const 
{
  return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const 
{
  return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const 
{
  return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const 
{
  return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const 
{
  return (this->getRawBits() != other.getRawBits());
}

Fixed Fixed::operator+(const Fixed &other) const
{
  Fixed res = Fixed();

  res.setRawBits(this->getRawBits() + other.getRawBits());
  return (res);
}

Fixed Fixed::operator-(const Fixed &other) const
{
  Fixed res = Fixed();

  res.setRawBits(this->getRawBits() - other.getRawBits());
  return (res);
}

Fixed Fixed::operator*(const Fixed &other) const
{
  int _rawBits;
  Fixed res = Fixed();

  _rawBits = this->getRawBits() * other.getRawBits();
  _rawBits >>= 8;
  res.setRawBits(_rawBits);
  return (res);
}

Fixed Fixed::operator/(const Fixed &other) const
{
  int _rawBits;
  Fixed res = Fixed();

  _rawBits = this->getRawBits() << 8;
  _rawBits /= other.getRawBits();
  res.setRawBits(_rawBits);
  return (res);
}

Fixed &Fixed::operator++(void) 
{
  this->setRawBits(this->getRawBits() + 1);
  return (*this);
}

Fixed &Fixed::operator--(void) 
{
  this->setRawBits(this->getRawBits() - 1);
  return (*this);
}

Fixed Fixed::operator++(int) 
{
  Fixed copy = *this;

  this->setRawBits(this->getRawBits() + 1);
  return (copy);
}

Fixed Fixed::operator--(int) 
{
  Fixed copy = *this;

  this->setRawBits(this->getRawBits() - 1);
  return (copy);
}

Fixed &Fixed::min(Fixed &a, Fixed &b) 
{
  if (a.getRawBits() < b.getRawBits())
    return (a);
  return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) 
{
  if (a.getRawBits() > b.getRawBits())
    return (a);
  return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) 
{
  if (a.getRawBits() < b.getRawBits())
    return (a);
  return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) 
{
  if (a.getRawBits() > b.getRawBits())
    return (a);
  return (b);
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