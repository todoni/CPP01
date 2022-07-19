#ifndef HUMAN_A_H
# define HUMAN_A_H

# include <string>
# include <iostream>
# include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	name;
		Weapon 		&weapon;
	
	public:
		HumanA(std::string name, Weapon& weapon);
		void	attack(void);
};

#endif
