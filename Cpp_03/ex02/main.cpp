# include "ScavTrap.hpp"

int main(void)
{
	ScavTrap a = ScavTrap("houssam", 1337, 3, 100);

	a.attack("zwina");
	a.beRepaired(150);
	a.guardGate();
	a.takeDamage(1000);
	a.beRepaired(150);
	a.beRepaired(150);
	a.beRepaired(150);
}