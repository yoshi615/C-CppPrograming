// Account.cpp - 銀行口座クラスのソースファイル
#include <string>
#include <iostream>
#include "Account.h" // 自身のヘッダファイルをインクルード

using namespace std;

// コンストラクタの定義
Account::Account(string name, string num, long amnt) {
    full_name = name;
    number = num;
    crnt_balance = amnt;
}

// 他のメンバ関数の定義...
void Account::deposit(long amnt) {
    crnt_balance += amnt;
}

void Account::withdraw(long amnt) {
    crnt_balance -= amnt;
}
