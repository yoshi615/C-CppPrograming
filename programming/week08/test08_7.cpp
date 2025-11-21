// 配列による文字列とポインタによる文字列
#include <iostream>
 using namespace std;
 int main()
 {
 char a[][5] = {"LISP", "C", "Ada"}; 
char* p[] = {"PAUL", "X", "MAC"}; 
for (int i = 0; i < 3; i++)
cout << (void *)a[i] << ", " << "a[" << i << "] = \"" << a[i] << "\"\n";
 for (int i = 0; i < 3; i++)
 cout << (void *)p[i] << ", " << "p[" << i << "] = \"" << p[i] << "\"\n";
 }