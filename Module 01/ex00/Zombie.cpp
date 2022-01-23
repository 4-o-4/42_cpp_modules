#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
    announce();
}

Zombie::~Zombie() {
    std::cout << "Delete " << _name << std::endl;
}

void Zombie::announce(void) const {
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
