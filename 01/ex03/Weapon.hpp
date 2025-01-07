#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	public:
		Weapon(std::string src);
		~Weapon();
	public:
		const std::string&	getType();
		void				setType(std::string src);
	private:
		std::string	_type;
};

# endif