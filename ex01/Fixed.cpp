#include "Fixed.hpp"

Fixed::Fixed(void): _n(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &arg)
{
    std::cout <<"Copy constructor called" << std::endl;
    *this = arg;
}

Fixed::Fixed(const int i)
{
    std::cout <<"Int constructor called" << std::endl;
    _n = i << _n_bits;
}

Fixed::Fixed(const float f)
{
    std::cout <<"Float constructor called" << std::endl;
    _n = roundf(f * (1 << _n_bits));
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

// copy assignment operator overload
Fixed& Fixed::operator=(const Fixed &arg)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &arg)
        this->_n = arg.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (this->_n);
}

void Fixed::setRawBits(int const raw)
{
    this->_n = raw;
}

float Fixed::toFloat(void) const
{
    return (static_cast<float>(_n) / (1 << _n_bits));
}

int Fixed::toInt(void) const
{
    return (_n / (1 << _n_bits));
}

// insertion operator overload
std::ostream& operator<<(std::ostream& out, const Fixed &Fixed)
{
    out << Fixed.toFloat();
    return (out);
}