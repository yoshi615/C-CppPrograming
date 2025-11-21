#include <iostream>
#include <string>

int main() {
    std::string a, b;
    if (!std::getline(std::cin, a)) return 0;
    if (!std::getline(std::cin, b)) return 0;

    std::cout << a << " and " << b << std::endl;
    return 0;
}