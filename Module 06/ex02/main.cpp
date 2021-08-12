#include "Base.hpp"

Base *generate(void) {
    srand(time(NULL));
    switch (rand() % 3) {
        case 0:
            return new A;
            break;
        case 1:
            return new B;
            break;
        default:
            return new C;
    }
}

void identify(Base *p) {
    if (dynamic_cast<A *>(p))
        std::cout << "* - A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "* - B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "* - C" << std::endl;
}

void identify(Base &p) {
    try {
        Base &a = dynamic_cast<A &>(p);
        std::cout << "& - A" << std::endl;
        (void) a;
    } catch (const std::bad_cast &e) {}
    try {
        Base &b = dynamic_cast<B &>(p);
        std::cout << "& - B" << std::endl;
        (void) b;
    } catch (const std::bad_cast &e) {}
    try {
        Base &c = dynamic_cast<C &>(p);
        std::cout << "& - C" << std::endl;
        (void) c;
    } catch (const std::bad_cast &e) {}
}

int main() {
    Base *p = generate();
    identify(p);
    identify(*p);
    delete p;

    return 0;
}
