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
	// function
		float	toFloat() const;
		int		toInt() const;
		int		getRawBits() const;
		void	setRawBits(int const raw);
		static float	max(Fixed &a, Fixed &b);
		static float	min(Fixed &a, Fixed &b);

	// overload operators
		Fixed & operator= (Fixed const & src);
		bool	operator== (Fixed const & src) const;
		bool	operator!= (Fixed const & src) const;
		bool	operator>= (Fixed const & src) const;
		bool	operator<= (Fixed const & src) const;
		bool	operator> (Fixed const & src) const;
		bool	operator< (Fixed const & src) const;
		Fixed	operator+ (Fixed const & src) const;
		Fixed	operator- (Fixed const & src) const;
		Fixed	operator* (Fixed const & src) const;
		Fixed	operator/ (Fixed const & src) const;
		Fixed	operator++ (int);
		Fixed &	operator++ ();
		Fixed	operator-- (int);
		Fixed &	operator-- ();

	private:
		int	rawbits;
		int constvalus = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);

# endif