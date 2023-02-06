
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB () {}

HumanB::HumanB (std::string _name)
{
	name = _name;
	gun = NULL;
}

void	HumanB::setWeapon (Weapon &_gun)
{
	gun = &_gun;
}

void	HumanB::attack ( void )
{
	if (!gun)
		std::cout << "No gun was set" << std::endl;
	else
		std::cout << name << " attacks with their "
					<< gun->getType() << std::endl;
}