#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "max:" << Fixed::max( a, b ) << std::endl;

	/*
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( 0 );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a > c: " << (a > c) << std::endl;
	std::cout << "a < c: " << (a < c) << std::endl;
	std::cout << "a >= c: " << (a >= c) << std::endl;
	std::cout << "a <= c: " << (a <= c) << std::endl;
	std::cout << "a == c: " << (a == c) << std::endl;
	std::cout << "a != c: " << (a != c) << std::endl;
	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;

	std::cout << "a + c: " << (a + c) << std::endl;
	std::cout << "a + b: " << (a + b) << std::endl;
	std::cout << "a - c: " << (a - c) << std::endl;
	std::cout << "a - b: " << (a - b) << std::endl;
	std::cout << "a * c: " << (a * c) << std::endl;
	std::cout << "a * b: " << (a * b) << std::endl;
	std::cout << "a * d: " << (a * d) << std::endl;
	std::cout << "a / c: " << (a / c) << std::endl;
	std::cout << "a / b: " << (a / b) << std::endl;
	std::cout << "a / d: " << (a / d) << std::endl;
	*/
	return 0;
}