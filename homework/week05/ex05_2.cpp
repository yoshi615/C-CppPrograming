#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double tensu[5];
	double sum = 0.0;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "番の点数：";
		cin >> tensu[i];
		sum += tensu[i];
	}

	double avg = sum / 5.0;
	double var = 0.0;
	for (int i = 0; i < 5; i++) {
		double d = tensu[i] - avg;
		var += d * d;
	}
	var /= 5.0;

	cout << "合計は " << sum << " 点です。\n";
	cout << fixed << setprecision(2);
	cout << "平均は " << avg << " 点です。\n";
	cout << "分散 = " << var << "\n";

	return 0;
}