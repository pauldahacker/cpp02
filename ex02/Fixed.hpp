#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_n;
		static const int	_n_bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &arg);
		Fixed(const int i);
		Fixed(const float f);

		// copy assignment operator overload
		Fixed& operator=(const Fixed &arg);

		// comparison operator overloads
		bool operator>(const Fixed &arg) const;
		bool operator<(const Fixed &arg) const;
		bool operator>=(const Fixed &arg) const;
		bool operator<=(const Fixed &arg) const;
		bool operator==(const Fixed &arg) const;
		bool operator!=(const Fixed &arg) const;

		// arithmetic operator overloads
		Fixed operator+(const Fixed &arg);
		Fixed operator-(const Fixed &arg);
		Fixed operator*(const Fixed &arg);
		Fixed operator/(const Fixed &arg);

		// increment/decrement operator overloads
		Fixed operator++(void);
		Fixed operator++(int);
		Fixed operator--(void);
		Fixed operator--(int);

		// public overloaded member functions
		static Fixed& min(Fixed &x, Fixed &y);
		static const Fixed& min(const Fixed &x, const Fixed &y);
		static Fixed& max(Fixed &x, Fixed &y);
		static const Fixed& max(const Fixed &x, const Fixed &y);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

// insertion operator overload
std::ostream& operator<<(std::ostream& out, const Fixed &Fixed);

#endif