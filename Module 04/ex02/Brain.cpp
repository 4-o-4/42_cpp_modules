#include "Brain.hpp"

Brain::Brain(void) {
    for (int i = 0; i < IDEAS; i++)
        _ideas[i] = "idea-" + std::to_string(i);
}

Brain::Brain(const Brain &cope) {
    for (int i = 0; i < IDEAS; i++)
        _ideas[i] = cope._ideas[i];
}

Brain &Brain::operator=(const Brain &cope) {
    for (int i = 0; i < IDEAS; i++)
        _ideas[i] = cope._ideas[i];
    return *this;
}

Brain::~Brain() {
    std::cout << "Delete Brain | ";
}

std::string Brain::getIdea(int i) {
    return _ideas[i];
}
