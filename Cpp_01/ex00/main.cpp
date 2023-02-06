# include "Zombie.hpp"

int main()
{
	Zombie *zombie;

	zombie = newZombie("Lurker");
	zombie->announce();

	randomChump("houssam");
	delete zombie;
	return (0);
}