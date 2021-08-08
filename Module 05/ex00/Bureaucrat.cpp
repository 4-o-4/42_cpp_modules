#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
    std::cout << *this << std::endl;
    if (1 > _grade)
        throw GradeTooHighException();
    if (_grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &cope)
        : _name(cope._name), _grade(cope._grade) {
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &cope) {
    _name = cope._name;
    _grade = cope._grade;
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b) {
    return out << "Name: " + b.getName() + ", grade: " + std::to_string(b.getGrade());
}

std::string const &Bureaucrat::getName(void) const {
    return _name;
}

int Bureaucrat::getGrade(void) const {
    return _grade;
}

void Bureaucrat::highGrade(void) {
    _grade--;
    std::cout << *this << std::endl;
    if (1 > _grade)
        throw GradeTooHighException();
}

void Bureaucrat::lowGrade(void) {
    _grade++;
    std::cout << *this << std::endl;
    if (_grade > 150)
        throw GradeTooLowException();
}
