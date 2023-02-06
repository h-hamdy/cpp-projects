# include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a = ClapTrap("jesse", 1337, 10, 1);
	ClapTrap b = ClapTrap("walter");
	a.attack("Walter");
	a.beRepaired(10);
	a.takeDamage(9);
	b.beRepaired(0);
	a.takeDamage(1);
}