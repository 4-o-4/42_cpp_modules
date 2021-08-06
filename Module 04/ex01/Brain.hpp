#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

#define IDEAS 100

class Brain {
private:
    std::string _ideas[IDEAS];
public:
    Brain(void);
    Brain(const Brain &cope);
    Brain &operator=(const Brain &cope);
    ~Brain();
    std::string getIdea(int i);
};

#endif
