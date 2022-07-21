#include "Zombie.hpp"

int	main(void)
{
	randomChump("stack sohan");

	Zombie *newZ = newZombie("new sohan");
	newZ->announce();
	delete newZ;

	return (0);
}
