#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *zombie = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		std::stringstream ss;
		std::string s;
		ss << i;
		ss >> s;
		zombie[i].setZomebieName(name + s);
	}
	return zombie;
}
