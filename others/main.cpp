#include <string>
#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account suzuki("鈴木龍一", "12345678", 1000); // 鈴木君の口座
    Account takeda("武田浩文", "87654321", 200);  // 武田君の口座

    suzuki.withdraw(200); // 鈴木君が200円おろす
    takeda.deposit(100);  // 武田君が100円預ける

    cout << "■鈴木君の口座：\"" << suzuki.name() << "\" (" << suzuki.no()
         << ") " << suzuki.balance() << "円\n";

    cout << "■武田君の口座：\"" << takeda.name() << "\" (" << takeda.no()
         << ") " << takeda.balance() << "円\n";
}