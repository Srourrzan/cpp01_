#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB
{
public:
  void attack();
  HumanB(const std::string &name);
  ~HumanB();
  void setWeapon(Weapon &type);

private:
  std::string _name;
  Weapon *_weapon;
};

#endif
