#include <stdio.h>
 int main() {
 char name[256]; // 名前を格納する文字配列（十分なサイズを確保）
printf("お名前は："); // 名前の入力を促す
scanf("%s", name);   // 名前を読み込む（スペースは無視）
printf("こんにちは%sさん。\n", name); // 挨拶する
return 0;
 }