#include <string>
#include <iostream>
#include "Zombie.hpp"

int main()
{
  std::cout << "create a new zombie on the stack: " << std::endl;
  randomChump("esrour");
  std::cout << "create a new zombie on the heap: " << std::endl;
  Zombie *nzombie = newZombie("rsrour");
  
  nzombie->announce();
  delete nzombie;
  return (0);
}
