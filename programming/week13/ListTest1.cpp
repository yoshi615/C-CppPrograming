#include <iostream>
#include <list>

int main() {
    std::list<int> lst = {10, 20, 30};
    lst.push_front(5);   // {5, 10, 20, 30}
    lst.push_back(40);   // {5, 10, 20, 30, 40}
    lst.pop_front();     // {10, 20, 30, 40}
    lst.pop_back();      // {10, 20, 30}

    // イテレータを使って全要素を出力
    std::cout << "Listの要素: ";
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " "; // *it でイテレータが指す要素の値を取得
    }
    std::cout << std::endl;
}