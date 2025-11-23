#ifndef HUMANA_HPP
# define HUMAN_HPP

# include <string>
# include "Weapon.hpp"

class HumanA
{
public:
  void attack();
  HumanA(const std::string &name ,Weapon &type);
  ~HumanA();

private:
  std::string _name;
  Weapon &_weapon;
};

#endif
