#include <iostream>
#include <list>

int main()
{
    std::list<int> lst = {1, 2, 3, 4, 5};
    auto it = lst.begin();
    std::advance(it, 2);
    lst.insert(it, 10); // {1, 2, 10, 3, 4, 5}

    // it は依然として要素`3`を指している。これを削除する。
    // eraseは削除された要素の次の要素を指すイテレータを返す
    it = lst.erase(it); // {1, 2, 10, 4, 5}

    // list内の「5の倍数」をすべて削除する
    for (auto it = lst.begin(); it != lst.end();)
    {
        if ((*it) % 5 == 0)
        {
            // eraseは削除された要素の次の要素を指すイテレータを返す
            it = lst.erase(it);
        }
        else
        {
            ++it;
        }
    }

    // 出力
    std::cout << "編集後のListの要素: ";
    for (auto it = lst.begin(); it != lst.end(); ++it)
    {
        std::cout << *it << " "; // *it でイテレータが指す要素の値を取得
    }
    std::cout << std::endl;
}