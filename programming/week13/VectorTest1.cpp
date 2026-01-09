#include <iostream>
#include <vector>

int main() {
    std::vector<double> vec = {1.2, 2.0, 3.5, 4, 5};
    std::cout << "Vectorの要素: ";
    for (std::size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "最初の要素: " << vec.front() << std::endl;
    std::cout << "最後の要素: " << vec.back() << std::endl;
    vec.resize(10);
    std::cout << "リサイズ後のVectorの要素: ";
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;	
}