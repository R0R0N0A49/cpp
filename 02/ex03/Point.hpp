#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(float const x, const float y);
		Point(Point const &);
		~Point();

	public:
		Point & operator= (Point const & src);
		void	printValue();

	private:
		const Fixed _x;
		const Fixed _y;
};

#endif