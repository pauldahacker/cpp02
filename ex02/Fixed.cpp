#include "Fixed.hpp"

Fixed::Fixed(void): _n(0)
{
}

Fixed::Fixed(const Fixed &arg)
{
    *this = arg;
}

Fixed::Fixed(const int i)
{
    _n = i << _n_bits;
}

Fixed::Fixed(const float f)
{
    _n = roundf(f * (1 << _n_bits));
}

Fixed::~Fixed(void)
{
}


// copy assignment operator overload
Fixed& Fixed::operator=(const Fixed &arg)
{
    if (this != &arg)
        this->_n = arg.getRawBits();
    return (*this);
}


// comparison operator overloads
bool Fixed::operator>(const Fixed &arg) const
{
    return (_n > arg.getRawBits());
}

bool Fixed::operator<(const Fixed &arg) const
{
    return (_n < arg.getRawBits());
}

bool Fixed::operator>=(const Fixed &arg) const
{
    return (_n >= arg.getRawBits());
}

bool Fixed::operator<=(const Fixed &arg) const
{
    return (_n <= arg.getRawBits());
}

bool Fixed::operator==(const Fixed &arg) const
{
    return (_n == arg.getRawBits());
}

bool Fixed::operator!=(const Fixed &arg) const
{
    return (_n != arg.getRawBits());
}


// arithmetic operator overloads
Fixed Fixed::operator+(const Fixed &arg) const
{
    Fixed   sum = Fixed(toFloat() + arg.toFloat());
    return (sum);
}

Fixed Fixed::operator-(const Fixed &arg) const
{
    Fixed	diff = Fixed(toFloat() - arg.toFloat());
    return (diff);
}

Fixed Fixed::operator*(const Fixed &arg) const
{
    Fixed	prod = Fixed(toFloat() * arg.toFloat());
    return (prod);
}

Fixed Fixed::operator/(const Fixed &arg) const
{
	if (arg.toFloat() == 0)
		std::cout << "Division by 0" << std::endl, exit(EXIT_FAILURE);
    Fixed	quot = Fixed(toFloat() / arg.toFloat());
    return (quot);
}


// increment/decrement operator overloads
Fixed Fixed::operator++(void)
{
	++_n;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	pre = *this;
	++_n;
	return (pre);
}

Fixed Fixed::operator--(void)
{
	--_n;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	pre = *this;
	--_n;
	return (pre);
}


// public overloaded member functions
Fixed& Fixed::min(Fixed &x, Fixed &y)
{
	if (x < y)
		return (x);
	return (y);
}

const Fixed& Fixed::min(const Fixed &x, const Fixed &y)
{
	if (x < y)
		return (x);
	return (y);
}

Fixed& Fixed::max(Fixed &x, Fixed &y)
{
	if (x > y)
		return (x);
	return (y);
}

const Fixed& Fixed::max(const Fixed &x, const Fixed &y)
{
	if (x > y)
		return (x);
	return (y);
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