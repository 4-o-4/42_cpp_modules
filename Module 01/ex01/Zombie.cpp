#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::Zombie(std::string name) {
    setZombie(name);
}

Zombie::~Zombie() {
    std::cout << "Delete" << ' ' << _name << std::endl;
}

void Zombie::announce(void) {
    std::cout << _name << ' ' << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setZombie(std::string name) {
    _name = name;
    announce();
}
