#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
protected:
	std::string		Name;
	unsigned int	health;
	unsigned int	Energy;
	unsigned int	damage;
public:
	ClapTrap ();
	ClapTrap (std::string _Name, int _health, int _Energy, int _damage);
	ClapTrap (std::string _Name);
	ClapTrap (const ClapTrap &obj);
	ClapTrap& operator = (const ClapTrap&obj);
	~ClapTrap ();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif