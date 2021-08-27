#include "mutantstack.hpp"

int main() {
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    MutantStack<int>::reverse_iterator itr = mstack.rbegin();
    MutantStack<int>::reverse_iterator itre = mstack.rend();

    MutantStack<int> test;
    test = mstack;
    std::cout << "Size: " << mstack.size() << std::endl;
    std::cout << "Size: " << test.size() << std::endl;

    ++it;
    --it;

    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << "\n-----------\n" << std::endl;

    while (itr != itre) {
        std::cout << *itr << std::endl;
        ++itr;
    }

    return 0;
}
