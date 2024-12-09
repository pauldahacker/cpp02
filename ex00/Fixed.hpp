#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int					_n;
		static const int	_n_bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &arg);
		~Fixed(void);

		// copy assignment operator overload
		Fixed& operator=(const Fixed &arg);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif