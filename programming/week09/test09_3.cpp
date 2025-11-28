// C++スタイル：参照を用いて2つの整数の値を交換する 
#include <iostream> 
using namespace std; 
 
void swap_cpp(int& x, int& y) // xとyは参照 
{ 
    int t = x; 
    x = y; 
    y = t; 
} 
 
int main() 
{ 
    int a = 5, b = 10; 
    cout << "交換前: a = " << a << ", b = " << b << '\n'; 
    swap_cpp(a, b); // 変数を直接渡す 
}