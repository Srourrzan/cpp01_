#include "Zombie.hpp"
#include <iostream>

int main()
{
  int n;

  n = 10;
  Zombie* zombies = zombieHorde(n, "brain eater");
  if (!zombies)
	return (1);

  for(int i = 0; i < n; i++)
	zombies[i].announce();
  delete [] zombies;
  return (0);
}
