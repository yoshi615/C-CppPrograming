// 配列の全要素に0を代入（第１版）
#include <iostream>
using namespace std;
//--- 配列pの先頭n個の要素に0を代入（第１版）---//
void fill_zero(int* p, int n)
{
	while (n-- > 0) {
		*p = 0;
		p++;
	}
}
int main(void)
{
	int x[5] = {1, 2, 3, 4, 5};
	int x_size = sizeof(x) / sizeof(x[0]);
	for (int i = 0; i < x_size; i++)
		cout << "x[" << i << "] = " << x[i] << '\n';
	fill_zero(x, x_size);
	cout << "全要素に0を代入しました。\n";
	for (int i = 0; i < x_size; i++)
		cout << "x[" << i << "] = " << x[i] << '\n';
	return 0;
}