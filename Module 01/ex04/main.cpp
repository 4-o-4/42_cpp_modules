#include <iostream>
#include <string>
#include <fstream>

std::string replaceString(std::string line, std::string &s1, std::string &s2) {
    size_t found = line.find(s1);
    if (found != std::string::npos) {
        line.erase(found, s1.length());
        line.insert(found, s2);
        line = replaceString(line, s1, s2);
    }
    return line;
}

int main(void) {
    std::string s1 = "line";
    std::string s2 = "**";
    std::string line;

    std::ifstream infile("SomeText.txt");
    if (!infile) {
        std::cerr
        << "Uh oh, SomeText.txt could not be opened for reading!"
        << std::endl;
        return 0;
    }
    std::ofstream outfile("FILENAME.replace");
    while (std::getline(infile, line))
        outfile << replaceString(line, s1, s2) << std::endl;
    infile.close();
    outfile.close();
    return 0;
}
