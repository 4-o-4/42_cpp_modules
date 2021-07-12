#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen {
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    typedef void(Karen::*action)(void);
    static action menu[];
public:
    void information(int i);
    void complain(std::string level);
};

#endif
