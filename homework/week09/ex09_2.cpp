#include <iostream>

void count_call()
{
    static int cnt = 0;
    ++cnt;
    std::cout << "count_call: " << cnt << " 回目の呼び出しです。" << std::endl;
}

int main()
{
    // 関数を3回呼び出す
    count_call();
    count_call();
    count_call();
    return 0;
}