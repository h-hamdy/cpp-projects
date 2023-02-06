# include "Weapon.hpp"
# include "HumanA.hpp"

void	HumanA::attack ( void ) {
	std::cout << name << " attacks with their "
		<< gun.getType() << std::endl;
}
