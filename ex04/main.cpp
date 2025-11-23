
#include <iostream>
#include "utils.hpp"

int main(int argc, char *argv[])
{
  if (argc != 4)
	{
	  std::cerr << "invalid number of arguments, requires: string string filename " << std::endl;
	  return (1);
	}
  else
	{
	  if (ftReadContent(argv) < 0)
		return (2);
	}
  return (0);
}
