#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() :
  _name ("")
{}

Zombie::~Zombie()
{
  std::cout << this->_name << " died" << std::endl;
}

void Zombie::announce()
{
  std::cout << this->_name << ": BraiiiiiiinnzzzZ..." << std::endl;
}

void Zombie::setName( std::string name )
{
  this->_name = name;
}
