#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <exception>

#include "AForm.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define END "\033[0m"

class AForm;
class Bureaucrat {
private:
    std::string _name;
    int _grade;
public:
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &cope);
    Bureaucrat &operator=(const Bureaucrat &cope);
    friend std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);
    std::string const &getName(void) const;
    int getGrade(void) const;
    void highGrade(void);
    void lowGrade(void);
    void signForm(AForm &f);
    void executeForm(AForm const &f);

    class GradeTooHighException : public std::exception {
        const char *what() const throw() {
            return "Grade too high";
        };
    };

    class GradeTooLowException : public std::exception {
        const char *what() const throw() {
            return "Grade too low";
        };
    };
};

#endif
