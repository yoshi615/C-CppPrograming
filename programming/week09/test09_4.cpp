// Cスタイル：ポインタを用いて2つの整数の値を交換する 
#include <stdio.h> 
 
void swap_c(int* x, int* y) // xとyはポインタ 
{ 
    int t = *x; // xを逆参照し、それが指す値を取得する 
    *x = *y; 
    *y = t; 
} 
 
int main() 
{ 
    int a = 5, b = 10; 
    printf("交換前: a = %d, b = %d\n", a, b); 
     
    swap_c(&a, &b); // aとbのアドレスを渡す 
     
    printf("交換後: a = %d, b = %d\n", a, b); 
    return 0; 
}