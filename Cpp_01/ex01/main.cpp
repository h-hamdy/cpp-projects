# include "Zombie.hpp"

int main()
{
	Zombie *zombie;

	zombie = newZombie("Lurker");
	zombie->announce();

	randomChump("houssam");
	delete zombie;
	zombie = zombieHorde (3, "The Infected");
	delete [] zombie;
	return (0);
}