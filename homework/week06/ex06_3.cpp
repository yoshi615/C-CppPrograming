#include <iostream>

int F(int k) {
	if (k <= 2) return 1;
	return F(k - 1) + F(k - 2);
}

int main() {
	int n;
	if (!(std::cin >> n)) return 0;
	if (n <= 0) {
		std::cout << "無効な値" << '\n';
	} else if (n > 30) {
		std::cout << "数値が大きすぎます" << '\n';
	} else {
		std::cout << "F(" << n << ")=" << F(n) << '\n';
	}
	return 0;
}