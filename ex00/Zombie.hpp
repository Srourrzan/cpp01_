#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie
{
public:
  ~Zombie( void );
  void announce( void );
  Zombie( std::string name );

private:
  std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump( std::string name );

#endif
