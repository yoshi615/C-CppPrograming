#include <iostream>

int main() {
	// ユーザーに入力を促す
	std::cout << "1〜7の数字を入力してください: ";

	int n;
	// 非整数入力の検出
	if (!(std::cin >> n)) {
		std::cout << "無効な入力です。\n";
		return 0;
	}

	// 入力値に応じて曜日を表示（1=日曜日, 2=月曜日, ..., 7=土曜日）
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
