#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <exception>

#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm {
private:
    std::string const _name;
    const int _gradeSign;
    const int _gradeExec;
    bool _signed;
public:
    AForm(std::string name, int gradeSign, int gradeExec, bool sign = false);
    AForm(const AForm &cope);
    AForm &operator=(const AForm &cope);
    virtual ~AForm() {};
    friend std::ostream &operator<<(std::ostream &out, const AForm &f);
    std::string const &getName(void) const;
    int getGradeSign(void) const;
    int getGradeExec(void) const;
    bool isSigned(void) const;
    void beSigned(Bureaucrat const &b);
    virtual void execute(Bureaucrat const &executor) const = 0;

    class GradeTooHighException : public std::exception {
        const char *what() const throw() { return "✕ Grade too high ✕"; };
    };

    class GradeTooLowException : public std::exception {
        const char *what() const throw() { return "✕ Grade too low ✕"; };
    };

    class FormNotSignedException : public std::exception {
        const char *what() const throw() { return "✕ Form not signed ✕"; };
    };
};

#endif
