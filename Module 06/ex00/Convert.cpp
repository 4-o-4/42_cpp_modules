#include "Convert.hpp"

Convert::Convert(char *str) : _str(str) {
};

Convert::Convert(const Convert &cope) : _str(cope._str) {
}

Convert &Convert::operator=(const Convert &cope) {
    _str = cope._str;
    return *this;
}

void Convert::toChar(void) const {
    std::cout << "char: ";
    try {
        int i = atoi(_str) % 128;
        if (i < 0)
            i = -i;
        if (!i && *_str != '0' && strlen(_str) < 2)
            i = static_cast<int>(*_str);
        if (!strcmp(_str, "nan"))
            throw "impossible";
        if (!isprint(i))
            throw "Non displayable";
        std::cout << GREEN << "\'" << static_cast<char>(i) << "\'" << END << std::endl;
    }
    catch (const char *e) {
        std::cerr << RED << e << END << std::endl;
    }
}

void Convert::toInt(void) const {
    std::cout << "int: ";
    try {
        int i = atoi(_str);
        if (!i && *_str != '0' && strlen(_str) < 2)
            i = static_cast<int>(*_str);
        if (!i && *_str != '0')
            throw "impossible";
        std::cout << GREEN << i << END << std::endl;
    }
    catch (const char *e) {
        std::cerr << RED << e << END << std::endl;
    }
}

void Convert::toFloat(void) const {
    std::cout << "float: ";
    try {
        float i = atof(_str);
        if (!i && *_str != '0' && strlen(_str) < 2)
            i = static_cast<float>(*_str);
        if (!i && *_str != '0')
            throw "nanf";
        std::cout << GREEN << i << (static_cast<int>(i) - i ? "f" : ".0f") << END << std::endl;
    }
    catch (const char *e) {
        std::cerr << RED << e << END << std::endl;
    }
}

void Convert::toDouble(void) const {
    std::cout << "double: ";
    try {
        double i = atof(_str);
        if (!i && *_str != '0' && strlen(_str) < 2)
            i = static_cast<double>(*_str);
        if (!i && *_str != '0')
            throw "nan";
        std::cout << GREEN << i << (static_cast<int>(i) - i ? "" : ".0") << END << std::endl;
    }
    catch (const char *e) {
        std::cerr << RED << e << END << std::endl;
    }
}

void Convert::print(void) {
    toChar();
    toInt();
    toFloat();
    toDouble();
}
