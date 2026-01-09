#include <iostream>
#include "IdNo2.h"
using namespace std;

int main()
{
    IdNo2 a;
    IdNo2 b;
    IdNo2 c[4];
    cout << "aの識別番号：" << a.id() << '\n';
    cout << "bの識別番号：" << b.id() << '\n';
    for (int i = 0; i < 4; i++)
        cout << "c[" << i << "]の識別番号：" << c[i].id() << '\n';

    cout << "割り当て済みの最大識別番号：" << IdNo2::get_max_id() << '\n';
}