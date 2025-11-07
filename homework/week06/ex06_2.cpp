#include <iostream>

bool isLeap(int y) {
	if (y % 400 == 0) return true;
	if (y % 100 == 0) return false;
	return (y % 4 == 0);
}

int main() {
	bool first = true;
	for (int y = 2000; y <= 2099; ++y) {
		if (isLeap(y)) {
			if (!first) std::cout << ' ';
			std::cout << y;
			first = false;
		}
	}
	std::cout << '\n';
	return 0;
}