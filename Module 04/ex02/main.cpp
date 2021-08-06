#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define COUNT 6

int main() {
    const Animal *j[COUNT];
    int i = 0;

    while (i < COUNT) {
        if (i % 2 == 0)
            j[i] = new Dog();
        else
            j[i] = new Cat();
        j[i]->getBrain(i);
        j[i++]->makeSound();
    }
    while (i--)
        delete j[i];
    return 0;
}
