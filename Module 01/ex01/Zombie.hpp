#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private:
    std::string _name;
public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie();
    void announce(void) const;
    void setZombie(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif
