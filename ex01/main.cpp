#include "Zombie.hpp"
#define N 11

int	main(void)
{
	Zombie *zombies = zombieHorde(N, "zombie sohan");
	zombies->announce();
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete [] zombies;
}
