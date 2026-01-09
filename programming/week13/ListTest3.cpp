#include <iostream>
#include <list>

int main() {
    std::list<int> lst = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    lst.sort(); 
    std::cout << "ソート後のList: ";
    for (int element : lst) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // 隣接する重複要素を削除
    lst.unique(); 
    // 出力
    std::cout << "ソートして重複削除したList: ";
    for (int element : lst) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}