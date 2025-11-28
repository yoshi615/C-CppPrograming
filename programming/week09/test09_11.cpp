#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>

int max_no = 100;
static int secret_no = 0;

void initialize() {
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

void gen_no() {
	if (max_no < 0) max_no = 0;
	secret_no = std::rand() % (max_no + 1);
}

// 戻り値: 0 正解, -1 小さい（もっと大きい）, 1 大きい（もっと小さい）
int judge(int cand) {
	if (cand == secret_no) return 0;
	return (cand < secret_no) ? -1 : 1;
}

// 標準入力から1行読み取り整数に変換する。
// EOF の場合は std::numeric_limits<int>::min() を返す。
int input_number() {
	std::string line;
	while (true) {
		if (!std::getline(std::cin, line)) return std::numeric_limits<int>::min();
		// 空行は再入力
		if (line.empty()) {
			std::cout << "整数を入力してください: ";
			continue;
		}
		try {
			size_t idx = 0;
			long v = std::stol(line, &idx);
			// 余分な文字がある場合は無効
			if (idx != line.size()) {
				std::cout << "整数形式で入力してください: ";
				continue;
			}
			// 範囲外は int に収まるか確認
			if (v < std::numeric_limits<int>::min() || v > std::numeric_limits<int>::max()) {
				std::cout << "範囲内の整数を入力してください: ";
				continue;
			}
			return static_cast<int>(v);
		} catch (...) {
			std::cout << "整数形式で入力してください: ";
			continue;
		}
	}
}

// 再挑戦確認: y/Y の場合 true、それ以外は false。
// EOF の場合は false を返す。
bool confirm_retry() {
	std::string line;
	std::cout << "もう一度遊びますか？ (y/n): ";
	if (!std::getline(std::cin, line)) return false;
	if (!line.empty() && (line[0] == 'y' || line[0] == 'Y')) return true;
	return false;
}

int main() {
	initialize();
	std::cout << "数当てゲーム (0 から " << max_no << " まで)\n";

	while (true) {
		gen_no();
		std::cout << "数を当ててください: ";

		int attempts = 0;
		while (true) {
			int cand = input_number();
			if (cand == std::numeric_limits<int>::min()) {
				// EOF 等で終了
				std::cout << "\n入力が終了したためゲームを終了します。\n";
				return 0;
			}
			++attempts;
			int res = judge(cand);
			if (res == 0) {
				std::cout << "正解！ 試行回数: " << attempts << "\n";
				break;
			} else if (res == -1) {
				std::cout << "小さいです。もっと大きい数を入力してください: ";
			} else {
				std::cout << "大きいです。もっと小さい数を入力してください: ";
			}
		}

		if (!confirm_retry()) break;
	}

	std::cout << "ご利用ありがとうございました。\n";
	return 0;
}