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
		~Fixed(void);

		// copy assignment operator overload
		Fixed& operator=(const Fixed &arg);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

// insertion operator overload
std::ostream& operator<<(std::ostream& out, const Fixed &Fixed);

#endif