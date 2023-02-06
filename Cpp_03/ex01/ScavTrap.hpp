#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap {
public:
	ScavTrap ();
	ScavTrap (std::string Name);
	ScavTrap (std::string _Name, int _health, int _Energy, int _damage);
	ScavTrap (const ScavTrap &obj);
	ScavTrap& operator = (const ScavTrap& obj);
	~ScavTrap();
	void	attack(const std::string& target);
	void	guardGate();
};

#endif