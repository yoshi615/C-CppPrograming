#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;
    std::cout << "初期容量: " << vec.capacity() << std::endl;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    std::cout << "現在の要素数: " << vec.size() << std::endl;
    std::cout << "現在の容量: " << vec.capacity() << std::endl;
    vec.pop_back();
    std::cout << "pop_back後の要素数: " << vec.size() << std::endl;
    std::cout << "Vectorの要素: ";
    for (int i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}