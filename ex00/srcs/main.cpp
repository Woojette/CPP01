#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

int main(void)
{
  Zombie* z = newZombie("Foo");
  z->announce();
  delete z;
  randomChump("Random");
  return (0);
}