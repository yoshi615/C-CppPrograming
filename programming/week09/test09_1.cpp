// List 6-16: 2つの整数の値を交換する（誤った例） 
#include <iostream> 
 
using namespace std; 
 
//--- xとyの値を交換する（値渡し）--- 
void swap(int x, int y) 
{ 
    int t = x; 
    x = y; 
    y = t; 
} 
 
int main() 
{ 
    int a, b; 
    cout << "変数a: "; cin >> a; 
    cout << "変数b: "; cin >> b; 
 
    swap(a, b); 
 
    cout << "変数aの値は " << a << " です。\n"; 
    cout << "変数bの値は " << b << " です。\n"; 
}