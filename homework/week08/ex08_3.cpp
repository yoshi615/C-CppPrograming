#include <iostream>
#include <string>

int main() {
    std::string a, b;
    if (!std::getline(std::cin, a)) return 0;
    if (!std::getline(std::cin, b)) return 0;

    if (a.find(b) != std::string::npos)
        std::cout << "True" << std::endl;
    else
        std::cout << "False" << std::endl;

    return 0;
}