#include <iostream>
using namespace std;

int main() {
	int N;
	if (!(cin >> N)) return 0;
	if (N <= 0) {
		cout << "無効な入力です。" << endl;
		return 0;
	}
	for (int i = 1; i <= N; ++i) {
		for (int s = 0; s < N - i; ++s) cout << ' ';
		for (int j = 0; j < i; ++j) cout << '*';
		cout << endl;
	}
	return 0;
}