# include "FragTrap.hpp"

FragTrap::FragTrap () : ClapTrap("Anonymous", 100, 100, 30) {
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap (std::string Name)
	: ClapTrap(Name) {
		std::cout << "FragTrap constructor called " << '[' << Name << ']' << std::endl;
		health = 100;
		Energy = 100;
		damage = 30;
	}

FragTrap::FragTrap (std::string _Name, int _health, int _Energy, int _damage)
	: ClapTrap(_Name, _health, _Energy, _damage) {
		std::cout << "FragTrap constructor called " << '[' << Name << ']' << std::endl;
}

FragTrap::FragTrap (const FragTrap &obj)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = obj;
}

FragTrap& FragTrap::operator = (const FragTrap& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	Name = obj.Name;
	health = obj.health;
	Energy = obj.Energy;
	damage = obj.damage;
	return (*this);
}

FragTrap::~FragTrap () {
	std::cout << "FragTrap Destructor called " << '[' <<  Name << ']' << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (!Energy || !health) {
		std::cout << "No Energy or health points left to attack" << std::endl;
		return ;
	}
	Energy--;
	std::cout << "FragTrap " << Name << " attacks " << target << ","
	<< " causing " << damage << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys ( void ) {
	std::cout << "positive high fives request " << std::endl;
}