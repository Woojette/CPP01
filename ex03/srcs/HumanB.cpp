#include "HumanB.hpp"

HumanB::HumanB(std::string name)
  : name(name), weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void  HumanB::setWeapon(Weapon& wp)
{
  this->weapon = &wp;
}

void  HumanB::attack()  const
{
  if (this->weapon)
  {
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
  }
}
