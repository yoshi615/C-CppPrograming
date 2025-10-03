#include <stdio.h> // 標準入出力ライブラリをインクルード
int main() {
 int x;         
int y;         
// 加減乗除する値
// 加減乗除する値
printf("xとyを加減乗除します。\n");         
printf("xの値：");                                                    
scanf("%d", &x);                                                     
 // printfで文字列を表示
// xの値の入力を促す
 // scanfで整数値を読み込み、xのメモリアドレスを渡す
printf("yの値：");                                                   
scanf("%d", &y);                                                      
printf("x + yは%dです。\n", x + y);                 
printf("x - yは%dです。\n", x - y);                   
printf("x * yは%dです。\n", x * y);                   
printf("x / yは%dです。\n", x / y);                   
printf("x %% yは%dです。\n", x % y);            
return 0; // プログラムの終了
}