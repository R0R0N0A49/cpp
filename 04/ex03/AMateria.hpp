#pragma once

#include "iostream"

class AMateria {
	protected:
		std::string const &type;

	public:
		AMateria(std::string const & type);
		AMateria(AMateria& cpy);
		AMateria& operator=(AMateria const& cpy);
		~AMateria();

	public:
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
//		virtual void use(ICharacter& target);
};
