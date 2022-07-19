#include "Zombie.hpp"

Zombie::Zombie(std::string str) 
	: name(str)
{

}

Zombie::~Zombie(void)
{
	std::cout << this->name + " destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" + this->name + ">: BraiiiiiiinnnzzzZ..." << std::endl;
}
