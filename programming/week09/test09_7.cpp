#include <iostream>

using namespace std;

// 2つの整数を足し算する関数 
int add(int a, int b) { return a + b; } 
 
// 2つの整数を引き算する関数 
int subtract(int a, int b) { return a - b; } 
 
int main() 
{ 
    // 関数ポインタの宣言（int型を2つ受け取り、int型を返す関数へのポインタ） 
    int (*op)(int, int); 
 
    // ポインタを add 関数に設定 
    op = add; 
    // ポインタ経由で関数を呼び出す 
    std::cout << "Addition: " << op(5, 3) << std::endl; 
 
    // ポインタを subtract 関数に設定 
    op = subtract; 
    // 再びポインタ経由で関数を呼び出す 
}