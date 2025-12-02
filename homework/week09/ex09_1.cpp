#include <iostream>
#include <cmath>
using namespace std;
void calc_mean_var(const float arr[], const int n, float &mean, float &var) {
	if (n <= 0) {
		mean = 0.0f;
		var = 0.0f;
		return;
	}
	float sum = 0.0f;
	for (int i = 0; i < n; ++i) sum += arr[i];
	mean = sum / n;

	float sqsum = 0.0f;
	for (int i = 0; i < n; ++i) {
		float d = arr[i] - mean;
		sqsum += d * d;
	}
	var = sqsum / n;
}

int main()
{
	float data1[] = { 1.0f, 2.0f, 3.0f, 4.0f, 5.0f };
	int n1 = sizeof(data1) / sizeof(data1[0]);

	float data2[] = { 6.0f, 7.0f, 8.0f, 9.0f, 20.0f };
	int n2 = sizeof(data2) / sizeof(data2[0]);

	float mean, var;
	calc_mean_var(data1, n1, mean, var);
	cout << "配列1: 平均値 = " << mean << ", 分散 = " << var << endl;

	calc_mean_var(data2, n2, mean, var);
	cout << "配列2: 平均値 = " << mean << ", 分散 = " << var << endl;

	return 0;
}