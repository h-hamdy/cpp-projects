# include "ClapTrap.hpp"

ClapTrap::ClapTrap () {
	std::cout << "ClapTrap Default constructor called" << std::endl;
	Name = "Anonymous";
	Energy = 10;
	health = 10;
	damage = 0;
}

ClapTrap::ClapTrap (std::string _Name, int _health, int _Energy, int _damage)
{
	std::cout << "ClapTrap constructor called " << '[' << _Name << ']' << std::endl;
	Name = _Name;
	health = _health;
	Energy = _Energy;
	damage = _damage;
}

ClapTrap::ClapTrap (std::string _Name)
{
	std::cout << "ClapTrap constructor called " << '[' << _Name << ']' << std::endl;
	Name = _Name;
	health = 10;
	Energy = 10;
	damage = 0;
}

ClapTrap::ClapTrap (const ClapTrap &obj)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = obj;
}


ClapTrap& ClapTrap::operator = (const ClapTrap& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	Name = obj.Name;
	health = obj.health;
	Energy = obj.Energy;
	damage = obj.damage;
	return (*this);
}

ClapTrap::~ClapTrap ()
{
	std::cout << "ClapTrap Destructor called " << '[' <<  Name << ']' << std::endl;
}

void ClapTrap::attack (const std::string &target)
{
	if (!Energy || !health) {
		std::cout << "No Energy or health points left to attack" << std::endl;
		return ;
	}
	Energy--;
	std::cout << "ClapTrap " << Name << " attacks " << target << ","
	<< " causing " << damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage (unsigned int amount)
{
	if (!health) {
		std::cout << "No health points left" << std::endl;
		return ;
	}
	if (amount > health)
		amount = health;
	std::cout << "ClapTrap " << Name 
	<< " take " << amount << " of damage!" << std::endl;
	health -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!Energy) {
		std::cout << "No Energy points left" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << Name 
	<< " get prepered by " << amount << " points!" << std::endl;
	health += amount;
	Energy--;
}
