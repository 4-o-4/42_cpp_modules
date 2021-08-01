#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define END "\033[0m"

class ClapTrap {
private:
    std::string _name;
    int _hitpoints;
    int _energy_points;
    int _attack_damage;
public:
    ClapTrap(std::string name);
    ~ClapTrap();
    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName(void);
    int getPoints(void);
    void setPoints(int i);
    void setEnergy(int i);
    void setDamage(int i);
};

#endif
