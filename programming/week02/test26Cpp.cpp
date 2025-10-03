// 名前を読み込んで挨拶する
#include <string>
 #include <iostream>
 using namespace std;
 int main()
 {
 string name;                                 
cout << "お名前は：";           
cin >> name;                               
// 名前
 // 名前の入力を促す
// 名前を読み込む（スペースは無視）
cout << "こんにちは" << name << "さん。\n";          
}