#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {
private:
    std::string const _name;
    const int _gradeSign;
    const int _gradeExec;
    bool _signed;
public:
    Form(std::string name, int gradeSign, int gradeExec, bool sign = false);
    Form(const Form &cope);
    Form &operator=(const Form &cope);
    friend std::ostream &operator<<(std::ostream &out, const Form &f);
    std::string const &getName(void) const;
    int getGradeSign(void) const;
    int getGradeExec(void) const;
    bool isSigned(void) const;
    void beSigned(Bureaucrat const &b);

    class GradeTooHighException : public std::exception {
        const char *what() const throw() { return "✕ Grade too high ✕"; };
    };

    class GradeTooLowException : public std::exception {
        const char *what() const throw() { return "✕ Grade too low ✕"; };
    };
};

#endif
