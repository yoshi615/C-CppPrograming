// ex10-2.cpp 
#include <string> 
#include <iostream> 
#include "Account.h" 
using namespace std; 
int main() 
{ 
//1244820232 北浦義就
// ↓ ここを自分の学籍番号と名前に書き換える 
Account my_account("北浦義就", "1244820232", 10000);  
my_account.withdraw(2000); // 2000円おろす 
my_account.deposit(1000);  // 1000円預ける 
cout << "\"" << my_account.name() << "\"さんの口座(" << my_account.no() << 
")：" << my_account.balance() << "円\n"; 
}