#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class	Zombie
{
	private:
		std::string	name;
	
	public:
		void	announce(void);
		void	setZomebieName(std::string str);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
