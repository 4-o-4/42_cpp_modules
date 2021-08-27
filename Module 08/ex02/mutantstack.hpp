#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template<class T, class Container = std::deque <T> >
class MutantStack : public std::stack<T, Container> {
public:
    MutantStack() {};
    MutantStack(const MutantStack &cope) {
        *this = cope;
    };

    MutantStack &operator=(const MutantStack &cope) {
        this->c = cope.c;
        return *this;
    };

    typedef typename std::stack<T, Container>::container_type::iterator iterator;
    iterator begin() {
        return std::stack<T, Container>::c.begin();
    };

    iterator end() {
        return std::stack<T, Container>::c.end();
    };

    typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
    reverse_iterator rbegin() {
        return std::stack<T, Container>::c.rbegin();
    };

    reverse_iterator rend() {
        return std::stack<T, Container>::c.rend();
    };
};

#endif
