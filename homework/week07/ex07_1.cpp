#include <iostream>

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main() {
	int x, y;
	if (!(std::cin >> x)) return 0;
	if (!(std::cin >> y)) return 0;

	swap(&x, &y);

	std::cout << x << ' ' << y << std::endl;
	return 0;
}