#include <stdio.h>
int main() {
 float x;
double y;
int z;
printf("1244820232 Yoshiyuki Kitaura\n");
printf("xとyを加減乗除します。\n");
printf("xの値：");
 scanf("%f", &x);
printf("yの値：");
 scanf("%lf", &y);
printf("zの値：");
 scanf("%d", &z);                       
printf("x / yは%fです。\n", (double)x / y);
printf("z / yは%lfです。\n", (double)z / y);
return 0;                                                                                  
}