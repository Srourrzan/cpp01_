#include <string>
#include <iostream>

int main()
{
  	std::string intstr = "HI THIS IS BRAIN";
	std::string* ptrstr = &intstr;
	std::string& refstr = intstr;

	std::cout << "The address of the string is " << &intstr << std::endl;
	std::cout << "The address of the stringPTR is " << ptrstr << std::endl;
	std::cout << "The address of the stringREF is " << &refstr << std::endl;
	std::cout << "string value = " << intstr << std::endl;
	std::cout << "the value pointed to by stringPTR = " << *ptrstr << std::endl;
	std::cout << "the value pointed to by stringREF = " << refstr << std::endl;
	return (0);
}
