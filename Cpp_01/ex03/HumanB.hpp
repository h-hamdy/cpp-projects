# include "Weapon.hpp"

class HumanB {
	private:
		Weapon*		gun;
		std::string name;
	public:
		HumanB();
		HumanB (std::string _name);
		void	setWeapon (Weapon& _gun);
		void	attack ( void );
};