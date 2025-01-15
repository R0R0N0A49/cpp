#ifndef FIXED_H
#define FIXED_H

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed& other);
		~Fixed();
	public:
		int getRawBits() const;
		void setRawBits(int const raw);
		Fixed & operator= (Fixed const & src);
	private:
		int	_rawbits;
		static const int _constvalus = 8;
};

#endif