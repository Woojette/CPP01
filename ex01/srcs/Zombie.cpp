#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string n)
{
  this->name = n;
}

Zombie::~Zombie()
{
  std::cout << name << " is destroyed." << std::endl;
}

void  Zombie::announce()
{
  std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void  Zombie::setName(std::string n)
{
  this->name = n;
}
