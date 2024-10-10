#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const int& value);
		Fixed(const float& value);
		Fixed(const Fixed& other);
		~Fixed();
	public:
		float	toFloat() const;
		int		toInt() const;
		int		getRawBits() const;
		void	setRawBits(int const raw);
		Fixed & operator= (Fixed const & src);
	private:
		int	rawbits;
		int constvalus = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);

# endif