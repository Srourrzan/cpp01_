#include <iostream>
#include <fstream>

static void ftReplaceContent(char *argv[], std::ifstream &ifs, std::ostream &ofs)
{
  std::string s1;
  std::string s2;
  std::string tmp;
  std::string cont;
  unsigned int i;

  i = 0;
  s1 = argv[1];
  s2 = argv[2];
  while (std::getline(ifs, cont))
	{
	  i = 0;
	  while(i < cont.size())
		{
		  if (i + s1.size() <= cont.size() && cont.compare(i, s1.size(), s1) == 0)
			{
			  cont.erase(i, s1.size());
			  cont.insert(i, s2);
			  i += s2.size();
			}
		  else
			i++;
		}
	  ofs << cont << std::endl;
	}
}

int ftReadContent(char *argv[])
{
  std::ifstream ifs;
  std::ofstream ofs;
  std::string outfilename;

  outfilename = argv[3];
  outfilename.append(".replace");
  ifs.open(argv[3]);
  if (!ifs.is_open())
	{
	  std::cerr << "Cannot open file\n";
	  return (2);
	}
  ofs.open(outfilename);
  if (!ofs.is_open())
	{
	  std::cerr << "Cannot create file\n";
	  return (2);
	}
  ftReplaceContent(argv, ifs, ofs);
  ifs.close();
  ofs.close();
  return (0);
}
