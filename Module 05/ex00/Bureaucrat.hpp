#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <exception>

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
