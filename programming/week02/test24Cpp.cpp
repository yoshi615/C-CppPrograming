// 0～9のラッキーナンバーを乱数で生成して表示
#include <ctime>
#include <cstdlib>
#include <iostream>
 using namespace std;
 int main()
 {
 srand(time(NULL));    
int lucky = rand() % 10;  
// 乱数の種を設定
// 0～9の乱数
cout << "今日のラッキーナンバーは" << lucky << "です。\n";
 }