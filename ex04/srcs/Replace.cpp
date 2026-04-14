#include "Replace.hpp"

std::string replaceLine(std::string line, std::string s1, std::string s2)
{
  size_t  position;

  position = line.find(s1);
  while (position != std::string::npos)
  {
    line = line.substr(0, position) + s2 + line.substr(position + s1.length());
    position = line.find(s1, position + s2.length());
  }
  return (line);
}
