#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap {
public:
	FragTrap ();
	FragTrap (std::string Name);
	FragTrap (std::string _Name, int _health, int _Energy, int _damage);
	FragTrap (const FragTrap &obj);
	FragTrap& operator = (const FragTrap&obj);
	~FragTrap ();
	void 	attack(const std::string &target);
	void	highFivesGuys ( void );
};

#endif