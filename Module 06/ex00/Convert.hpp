#ifndef CONVERT_H
#define CONVERT_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define END "\033[0m"

class Convert {
private:
    char *_str;
public:
    Convert(char *str);
    Convert(const Convert &cope);
    Convert &operator=(const Convert &cope);
    virtual ~Convert() {};
    void toChar(void) const;
    void toInt(void) const;
    void toFloat(void) const;
    void toDouble(void) const;
    void print(void);
};

#endif
