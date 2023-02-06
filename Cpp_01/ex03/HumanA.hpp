#include "Weapon.hpp"

class HumanA {
	public:
		Weapon&		gun;
		std::string name;
		HumanA();
		HumanA (std::string _name, Weapon &_gun)
			: gun(_gun), name(_name) {}
		void	attack ( void );
};