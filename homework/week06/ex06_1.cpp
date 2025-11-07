#include <iostream>
#include <cmath>

bool isPrime(int n) {
	if (n <= 1) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;
	int limit = static_cast<int>(std::sqrt(n));
	for (int i = 3; i <= limit; i += 2) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	bool first = true;
	for (int i = 100; i <= 200; ++i) {
		if (isPrime(i)) {
			if (!first) std::cout << ' ';
			std::cout << i;
			first = false;
		}
	}
	std::cout << '\n';
	return 0;
}