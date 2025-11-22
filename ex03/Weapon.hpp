#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class WEAPON
{
public:
  WEAPON(std::string type);
  const  WEAPON &getType();
  void setType(std::string &type);
  ~WEAPON();

private:
  std::string _type;
};

#endif
