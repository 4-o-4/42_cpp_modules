#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
        : AForm("Shrubbery Creation", 145, 137), _target(target) {
};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cope)
        : AForm(cope), _target(cope._target) {
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cope) {
    _target = cope._target;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    AForm::execute(executor);

    std::ofstream outfile(_target + "_shrubbery");
    outfile << \
    "                #                 \n"
    "               ***                \n"
    "              *****               \n"
    "             *****~~              \n"
    "              **~~~               \n"
    "             *~~~***              \n"
    "            ~~~******             \n"
    "           ~~*********            \n"
    "          *************           \n"
    "           ***********            \n"
    "          *************           \n"
    "         ***************          \n"
    "        *@***************         \n"
    "       ***@************@**        \n"
    "      *@****************@**       \n"
    "        @****************         \n"
    "       *******************        \n"
    "      *****@***************       \n"
    "     ***********************      \n"
    "    ********@****************     \n"
    "   *****************@*********    \n"
    "  *****************************   \n"
    "              |||||               \n"
    "              |||||   _8_8_       \n"
    "              |||||  |  |  |_8_   \n"
    "              |||||  |__|__|___|  ";
    outfile.close();
};
