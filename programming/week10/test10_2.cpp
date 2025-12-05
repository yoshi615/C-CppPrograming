// List 10-2: 銀行口座クラス（第1版）とその使用 
#include <string> 
#include <iostream> 
 
using namespace std; 
 
// 銀行口座クラスの定義 
class Account { 
public: 
    string name;    // 口座名義 
    string number;  // 口座番号 
    long balance;   // 預金残高 
}; 
 
int main() 
{ 
    Account suzuki;  // Account classのオブジェクト suzuki(鈴木君の口座)を生成 
    Account takeda;  // Account classのオブジェクト takeda(武田君の口座)を生成 
 
    // suzukiオブジェクトのデータを設定 
    suzuki.name = "鈴木龍一"; 
    suzuki.number = "12345678"; 
    suzuki.balance = 1000; 
 
    // takedaオブジェクトのデータを設定 
    takeda.name = "武田浩文"; 
    takeda.number = "87654321"; 
    takeda.balance = 200; 
 
    // 入出金操作 
    suzuki.balance -= 200;     // 鈴木君が200円おろす 
    takeda.balance += 100;     // 武田君が100円預ける 
 
    cout << "■鈴木さんの口座：\"" << suzuki.name << "\" (" << suzuki.number << ") " << suzuki.balance << "円\n"; 
    cout << "■武田さんの口座：\"" << takeda.name << "\" (" << takeda.number << ") " << takeda.balance << "円\n"; 
}