#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string &name):
  _name(name), _weapon(NULL)
{}

HumanB::~HumanB()
{}

void HumanB::attack()
{
  if (!this->_weapon)
	return;
  std::cout << this->_name
			<< " attacks with their "
			<< this->_weapon->getType()
			<< std::endl;
}

void HumanB::setWeapon(Weapon &type)
{
  this->_weapon = &type;
}
