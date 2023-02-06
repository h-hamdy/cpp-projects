#include "Zombie.hpp"

Zombie::~Zombie ()
{ 
	std::cout << "Say good bye to " << _name << std::endl;
}

void	Zombie::announce ( void )
{
	std::cout << _name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}