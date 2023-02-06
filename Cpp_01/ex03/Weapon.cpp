#include "Weapon.hpp"

std::string Weapon::getType () const
{
	return (_type);
}
 
void Weapon::setType (std::string type)
{
	_type = type;
}