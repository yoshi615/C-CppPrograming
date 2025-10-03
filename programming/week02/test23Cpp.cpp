// 二つの整数値を読み込んで加減乗除した値を表示
#include <iostream>
 using namespace std;
 int main()
 {
 int x;  
int y;  
// 加減乗除する値
// 加減乗除する値
cout << "xとyを加減乗除します。\n";
 cout << "xの値："; 
cin >> x;   
cout << "yの値："; 
cin >> y;   
// xの値の入力を促す
// xに整数値を読み込む
// yの値の入力を促す
// yに整数値を読み込む
cout << "x + yは" << x + y << "です。\n"; // x + yの値を表示
cout << "x - yは" << x - y << "です。\n"; 
// x - yの値を表示
cout << "x * yは" << x * y << "です。\n"; // x * yの値を表示
cout << "x / yは" << x / y << "です。\n"; 
// x / yの値を表示（商）
cout << "x % yは" << x % y << "です。\n"; // x % yの値を表示（剰余）
}