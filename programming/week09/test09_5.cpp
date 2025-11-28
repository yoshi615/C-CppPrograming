#include <iostream> 
 
using namespace std; 
 
int x = 75; // ファイルスコープ 
 
void print_x() 
{ 
    cout << "print_x: x = " << x << '\n'; 
} 
 
int main() 
{ 
    cout << "x = " << x << '\n'; // ファイルスコープのxにアクセス 
 
    int x = 999; // ブロックスコープ、ファイルスコープのxを隠蔽する 
    cout << "x = " << x << '\n'; // ブロックスコープのxにアクセス 
 
    for (int i = 1; i <= 5; i++) 
    { 
        int x = i * 11; // さらに内側のブロックスコープ 
        cout << "x = " << x << '\n'; 
    } 
 
    cout << "x = " << x << '\n';     // ブロックスコープ 
    cout << "::x = " << ::x << '\n'; // スコープ解決演算子を使用してファイルスコープのxにアクセス 
    print_x(); 
}