
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

    public:
        Zombie(std::string src);
		~Zombie(void);

    public:
        void    announce();

    private:
        std::string name;
};

#endif