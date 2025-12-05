#include <string>
#include <iostream>
#include "Account.h"

// ストリーム出力。public アクセサ(name/no/balance)を使って表示する。
std::ostream& operator<<(std::ostream& os, const Account& a) {
    os << "Account{ name: \"" << a.name()
       << "\", no: \"" << a.no()
       << "\", balance: " << a.balance()
       << " }";
    return os;
}