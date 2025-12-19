// List 12-2: CounterTest.cpp 
// Counterクラス（第1版）の利用例 
#include <iostream> 
#include "Counter.h" 
 
using namespace std; 
 
int main() 
{ 
    Counter x; // オブジェクトxを作成。コンストラクタが呼ばれ、x.cntが0に初期化される 
 
    cout << "現在のカウンタ：" << x.value() << "\n"; 
 
    int no; 
    cout << "カウントアップ回数："; 
    cin >> no; 
    for (int i = 0; i < no; i++) { 
        x.increment(); // メンバ関数を呼び出してインクリメント 
    } 
    cout << "現在のカウンタ：" << x.value() << "\n"; 
 
    cout << "カウントダウン回数："; 
    cin >> no; 
    for (int i = 0; i < no; i++) { 
        x.decrement(); // メンバ関数を呼び出してデクリメント 
    } 
    cout << "現在のカウンタ：" << x.value() << "\n"; 
}