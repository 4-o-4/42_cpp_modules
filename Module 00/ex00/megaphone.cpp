#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    std::string str;
    int         count;

    count = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (count < argc)
        str += argv[count++];
    count = 0;
    while (str[count])
    {
        if (str[count] >= 'a' && str[count] <= 'z')
            str[count] -= 32;
        count++;
    }
    std::cout << str << std::endl;
    return 0;
}
