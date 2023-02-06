# include "ScavTrap.hpp"

ScavTrap::ScavTrap () : ClapTrap("Anonymous", 100, 50, 20) {
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap (std::string Name)
	: ClapTrap(Name) {
		std::cout << "ScravTrap constructor called " << '[' << Name << ']' << std::endl;
		health = 100;
		Energy = 50;
		damage = 20;
	}

ScavTrap::ScavTrap (std::string _Name, int _health, int _Energy, int _damage)
	: ClapTrap(_Name, _health, _Energy, _damage) {
		std::cout << "ScravTrap constructor called " << '[' << Name << ']' << std::endl;
}

ScavTrap::ScavTrap (const ScavTrap &obj)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	Name = obj.Name;
	health = obj.health;
	Energy = obj.Energy;
	damage = obj.damage;
	return (*this);
}

ScavTrap::~ScavTrap () {
	std::cout << "ScavTrap Destructor called " << '[' <<  Name << ']' << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (!Energy || !health) {
		std::cout << "No Energy or health points left to attack" << std::endl;
		return ;
	}
	Energy--;
	std::cout << "ScravTrap " << Name << " attacks " << target << ","
	<< " causing " << damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
