#include "Weapon.hpp"
#include "iostream"

// void byPtr(std::string *str)
// {
//   *str += " and ponies";
// }

// void byConstPtr(std::string const *str)
// {
//   std::cout << *str << std::endl;
// }

// void byRef(std::string &str)
// {
//   str += " and ponies";
// }

// void byConstRef(std::string const & str)
// {
//   std::cout << str << std::endl;
// }

// int main()
// {
//   std::string str = "I like butter";

//   std::cout << str << std::endl;
//   byPtr(&str);
//   byConstPtr(&str);

//   str = "I like otters";

//   std::cout << str << std::endl;
//   byRef(str);
//   byConstRef(str);
  
//   return (0);
// }

class Student
{
private:
  std::string _login;

public:
  Stuent(std::string const & login) : _login(login)
  {
	
  };
  
  std:string& getLoginRef()
  {
	return this->_login;
  };
  
  std::string const & getLoginRefConst() const
  {
	return this->_login;
  };
  
  std::string* getLoginPtr()
  {
	return &(this->_login);
  };

  std::string const *getLoginPtrConst() const
  {
	return &(this->_login);
  };
};

int main()
{
  Student bob = Student("b");
  Student const jim = Student("j");

  std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
  std::cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst()) << std:endl;

  bob.getLoginRef() = "bob";
  std::cout << bob.getLoginRefConst() << std::endl;

  *(bob.getLoginPtr()) = "boby";
  std::cout << bob.getLoginRefConst() << std::endl;
  return (0);
}
