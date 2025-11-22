#include "Weapon.hpp"

Weapon::Weapon(std::string type):
  _type{type}
{
  
}

Weapon::~Weapon()
{
  
}

void Weapon::setType(std::string &type)
{
  this->_type = type;
}

const WEAPON &Weapon::getType()
{
  return this->_type;
}
