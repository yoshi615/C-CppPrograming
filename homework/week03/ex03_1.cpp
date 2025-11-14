#include <iostream>

int main() {
	std::cout << "1〜7の数字を入力してください: ";

	int n;
	if (!(std::cin >> n)) {
		std::cout << "無効な入力です。\n";
		return 0;
	}
	switch (n) {
		case 1: std::cout << "日曜日\n"; break;
		case 2: std::cout << "月曜日\n"; break;
		case 3: std::cout << "火曜日\n"; break;
		case 4: std::cout << "水曜日\n"; break;
		case 5: std::cout << "木曜日\n"; break;
		case 6: std::cout << "金曜日\n"; break;
		case 7: std::cout << "土曜日\n"; break;
		default: std::cout << "無効な入力です。\n"; break;
	}
	return 0;
}
