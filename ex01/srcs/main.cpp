#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
  int N = 7;

  Zombie* horde = zombieHorde(N, "hihi");
  for (int i = 0; i < N; i++)
  {
    horde[i].announce();
  }
  delete[]  horde;
  return (0);
}
