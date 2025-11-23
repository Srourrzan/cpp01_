#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

/*
 *
 HumanA and HumanB are almost identical except for these two small details:
• While HumanA takes the Weapon in its constructor, HumanB does not.
• HumanB may not always have a weapon, whereas HumanA will always be
armed
*/

int main()
{
  Weapon sord = Weapon("sord");
  HumanA bob("bob", sord);
  bob.attack();
  sord.setType("indian sord");
  bob.attack();
  Weapon saper("saper");
  HumanB jim("jim");
  jim.attack();
  jim.setWeapon(saper);
  jim.attack();
  saper.setType("rare Saber");
  jim.attack();
}
