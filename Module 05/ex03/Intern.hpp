#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
private:
    static AForm *PPF(std::string const &target);
    static AForm *RRF(std::string const &target);
    static AForm *SCF(std::string const &target);
    typedef AForm *(*action)(std::string const &target);
    static action form[];
public:
    AForm *makeForm(std::string const &name, std::string const &target) const;

    class FormNotFoundException : public std::exception {
    private:
        std::string const &_str;
    public:
        FormNotFoundException(std::string const &str) : _str(str) {};
        const char *what() const throw() {
            std::string str = "✕ " + _str + " form not found ✕";
            return str.c_str();
        };
    };
};

#endif
