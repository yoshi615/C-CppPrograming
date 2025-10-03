#include <stdio.h>
 int main() {
 char c;                                                                 
  // 文字を格納する変数
printf("文字を入力してください：");     // 文字の入力を促す
scanf(" %c", &c);                                                
// 文字を読み込む（先頭に空白を入れることで改行文字の読み込みを回避）
printf("打ち込んだ文字は%cです。\n", c);        
  // 表示
return 0;
 }