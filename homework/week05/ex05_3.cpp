#include <iostream>
using namespace std;

int main()
{
	int a[] = {1, 3, 9, 11, 25, 36};
	int n = sizeof(a) / sizeof(a[0]);
	int x;
	if (!(cin >> x)) return 0;

	bool printedX = false;
	for (int i = 0; i < n; ++i) {
		if (!printedX && x <= a[i]) {
			cout << x << ' ';
			printedX = true;
		}
		cout << a[i] << (i == n-1 && printedX ? '\n' : ' ');
	}
	if (!printedX) {
		cout << x << '\n';
	}
	return 0;
}