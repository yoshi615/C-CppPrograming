// 線形探索（第１版）
#include <iostream>
using namespace std;
//--- 配列aの先頭n個の要素から値keyを線形探索（第１版）---//
int seq_search(int* a, int n, int key)
{
	for (int i = 0; i < n; i++)
		if (a[i] == key)
			return i; // 見つかったらインデックスを返す
	return -1; // 見つからなければ-1を返す
}
int main(void)
{
	int key, idx;
	int x[8];
	int x_size = sizeof(x) / sizeof(x[0]);
	for (int i = 0; i < x_size; i++) {
		cout << "x[" << i << "] : ";
		cin >> x[i];
	}
	cout << "探す値は：";
	cin >> key;
	if ((idx = seq_search(x, x_size, key)) != -1)
		// 探索成功
		cout << "その値をもつ要素はx[" << idx<< "]です。\n";
	else
		// 探索失敗
		cout << "見つかりませんでした。\n";
	return 0;
}