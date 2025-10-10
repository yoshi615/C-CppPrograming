#include <iostream>
#include <algorithm>
#include <iomanip>

int main() {
	// 年収と扶養人数の入力
	std::cout << "年収（万円）を入力してください: ";
	int income;
	if (!(std::cin >> income)) {
		std::cout << "無効な入力です。\n";
		return 0;
	}

	std::cout << "扶養人数を入力してください: ";
	int dependents;
	if (!(std::cin >> dependents)) {
		std::cout << "無効な入力です。\n";
		return 0;
	}

	// 負の入力は無効
	if (income < 0 || dependents < 0) {
		std::cout << "無効な入力です。\n";
		return 0;
	}

	// 扶養人数は最大4人まで、1人あたり30万円を差し引く
	int dep = std::min(dependents, 4);
	int deduction = dep * 30; // 万円単位
	double taxable = static_cast<double>(income) - deduction;
	if (taxable < 0) taxable = 0.0;

	// 税率は「入力された年収」に基づく
	double rate = 0.0;
	if (income <= 200) rate = 0.05;
	else if (income <= 400) rate = 0.10;
	else rate = 0.20;

	// 税額と課税後所得を計算
	double tax = taxable * rate;
	double after_income = static_cast<double>(income) - tax;

	// 出力（万円、四捨五入して整数表示）
	std::cout << std::fixed << std::setprecision(0);
	std::cout << after_income << "万円\n";

	return 0;
}