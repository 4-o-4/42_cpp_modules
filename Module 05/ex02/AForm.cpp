#include "AForm.hpp"

AForm::AForm(std::string name, int gradeSign, int gradeExec, bool sign)
        : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _signed(sign) {
    std::cout << *this << std::endl;
    if (1 > gradeSign || 1 > gradeExec)
        throw GradeTooHighException();
    if (gradeSign > 150 || gradeExec > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm &cope)
        : _name(cope._name),
          _gradeSign(cope._gradeSign),
          _gradeExec(cope._gradeExec),
          _signed(cope._signed) {
}

AForm &AForm::operator=(const AForm &cope) {
    _signed = cope._signed;
    return *this;
}

std::ostream &operator<<(std::ostream &out, const AForm &f) {
    out << "Form: " + f.getName()
        << (f.isSigned() ? ", signed" : ", not signed") << "\n"
        << "Grade required to sign: " << f.getGradeSign() << "\n"
        << "Grade required to execute: " << f.getGradeExec();
    return out;
}

std::string const &AForm::getName(void) const {
    return _name;
}

int AForm::getGradeSign(void) const {
    return _gradeSign;
}

int AForm::getGradeExec(void) const {
    return _gradeExec;
}

bool AForm::isSigned(void) const {
    return _signed;
}

void AForm::beSigned(Bureaucrat const &b) {
    if (_gradeSign >= b.getGrade())
        _signed = true;
    else
        throw GradeTooLowException();
}

void AForm::execute(Bureaucrat const &executor) const {
    if (!_signed)
        throw FormNotSignedException();
    if (executor.getGrade() > _gradeSign)
        throw GradeTooLowException();
}
