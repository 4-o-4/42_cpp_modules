#include "Form.hpp"

Form::Form(std::string name, int gradeSign, int gradeExec, bool sign)
        : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _signed(sign) {
    std::cout << *this << std::endl;
    if (1 > gradeSign || 1 > gradeExec)
        throw GradeTooHighException();
    if (gradeSign > 150 || gradeExec > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &cope)
        : _name(cope._name),
          _gradeSign(cope._gradeSign),
          _gradeExec(cope._gradeExec),
          _signed(cope._signed) {
}

Form &Form::operator=(const Form &cope) {
    _signed = cope._signed;
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Form &f) {
    out << "Form: " + f.getName()
        << (f.isSigned() ? ", signed" : ", not signed") << "\n"
        << "Grade required to sign: " << f.getGradeSign() << "\n"
        << "Grade required to execute: " << f.getGradeExec();
    return out;
}

std::string const &Form::getName(void) const {
    return _name;
}

int Form::getGradeSign(void) const {
    return _gradeSign;
}

int Form::getGradeExec(void) const {
    return _gradeExec;
}

bool Form::isSigned(void) const {
    return _signed;
}

void Form::beSigned(Bureaucrat const &b) {
    if (_gradeSign >= b.getGrade())
        _signed = true;
    else
        throw GradeTooLowException();
}
