#include <iostream>
using namespace std;

int main() {
	long long sum = 0;
	long long count = 0;
	int n;
	while (cin >> n) {
		if (n < 0) break;
		sum += n;
		++count;
	}
	if (count == 0) {
		cout << "平均値は計算できません。" << endl;
	} else {
		double avg = static_cast<double>(sum) / count;
		cout << avg << endl;
	}
	return 0;
}