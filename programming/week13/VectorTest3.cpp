#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = {1, 2, 3};
    // 安全なアクセス (at)
    vec.at(2) = 100;
    std::cout << "vec.at(2) の値: " << vec.at(2) << std::endl;
    std::cout << "vec.at(5) にアクセス..." << std::endl;
    std::cout << vec.at(5) << std::endl;
    // operator[] は境界チェックを行わないため、範囲外アクセスは未定義動作を引き起こす（危険）
    // std::cout << vec[5] << std::endl;
}