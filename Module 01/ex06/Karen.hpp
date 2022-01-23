#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen {
private:
    typedef void (Karen::*action)(void);
    void _debug(void);
    void _info(void);
    void _warning(void);
    void _error(void);
    static action menu[];
public:
    void information(int i);
    void complain(std::string level);
};

#endif
