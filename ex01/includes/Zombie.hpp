#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
  private:
    std::string name;
  public:
    Zombie();
    Zombie(std::string n);
    ~Zombie();
    void  announce();
    void  setName(std::string n);
};

#endif
