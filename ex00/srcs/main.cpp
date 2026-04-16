#include "Zombie.hpp"

int main(void)
{
  Zombie* z = newZombie("Foo");
  z->announce();
  delete z;
  randomChump("Random");
  return (0);
}
