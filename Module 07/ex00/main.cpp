#include <iostream>
#include "whatever.hpp"

class Test {
private:
    int _i;
public:
    Test(int i) : _i(i) {};

    int getI(void) const {
        return _i;
    };

    bool operator==(Test const &cope) const {
        return _i == cope._i;
    };

    bool operator!=(Test const &cope) const {
        return _i != cope._i;
    };

    bool operator>(Test const &cope) const {
        return _i > cope._i;
    };

    bool operator<(Test const &cope) const {
        return _i < cope._i;
    };

    bool operator>=(Test const &cope) const {
        return _i >= cope._i;
    };

    bool operator<=(Test const &cope) const {
        return _i <= cope._i;
    };
};

std::ostream &operator<<(std::ostream &out, const Test &b) {
    return out << b.getI();
}


int main() {
    int a = 2;
    int b = 3;

    const int &i = max(a, b);
    std::cout << "a - " << reinterpret_cast<int *>(&a) << std::endl;
    std::cout << "b - " << reinterpret_cast<int *>(&b) << std::endl;
    std::cout << "i - " << reinterpret_cast<const int *>(&i) << std::endl;

    std::cout << "\n-----------\n" << std::endl;

    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

    std::cout << "\n-----------\n" << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

    std::cout << "\n-----------\n" << std::endl;

    Test f(4);
    Test g(5);

    ::swap(f, g);
    std::cout << "f = " << f << ", d = " << g << std::endl;
    std::cout << "min( f, d ) = " << ::min(f, g) << std::endl;
    std::cout << "max( f, d ) = " << ::max(f, g) << std::endl;

    return 0;
}
