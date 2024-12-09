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

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &arg)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &arg)
        this->_n = arg.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_n);
}

void Fixed::setRawBits(int const raw)
{
    this->_n = raw;
    std::cout << "setRawBits member function called" << std::endl;
}