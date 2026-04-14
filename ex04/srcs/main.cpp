#include "Replace.hpp"

int main(int ac, char **av)
{
  if (ac != 4)
  {
    std::cerr << "The program takes 3 parameters." << std::endl;
    return (1);
  }
  std::string filename = av[1];
  std::string s1 = av[2];
  if (s1.empty())
    return (1);
  std::string s2 = av[3];

  std::ifstream infile(filename.c_str());
  if (!infile)
  {
    std::cerr << "Error opening file" << std::endl;
    return (1);
  }
  std::ofstream outfile((filename + ".replace").c_str());

  std::string line;
  bool        first = true;
  while (std::getline(infile, line))
  {
    if (!first)
      outfile << "\n";
    line = replaceLine(line, s1, s2);
    outfile << line;
    first = false;
  }

  return (0);
}
