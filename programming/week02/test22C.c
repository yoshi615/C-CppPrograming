// 二つの変数xとyの合計と平均を表示
#include <stdio.h>
 int main() {
 int x; // xはint型の変数
int y; // yはint型の変数
x = 61; // xに61を代入
y = 19; // yに19を代入
printf("xの値は%dです。\n", x); // xの値を表示
printf("yの値は%dです。\n", y); // yの値を表示
printf("合計は%dです。\n", x + y); // xとyの合計を表示
double average = (double)(x + y) / 2.0; // double型にキャストして計算
printf("平均は%.2fです。\n", average); // 平均を表示
return 0;
 }