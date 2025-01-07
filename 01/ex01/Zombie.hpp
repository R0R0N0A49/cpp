#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

public:
	Zombie();
	~Zombie(void);

public:
	void    announce();
	void    rename(std::string src);

private:
	std::string _name;
};

#endif