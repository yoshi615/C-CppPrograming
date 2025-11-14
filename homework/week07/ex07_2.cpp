#include <iostream>
void calc_stat(float* arr, int n, float* min_val, float* max_val, float* mean) {
	if (n <= 0) {
		*min_val = *max_val = *mean = 0.0f;
		return;
	}
	float minv = arr[0];
	float maxv = arr[0];
	float sum = arr[0];
	for (int i = 1; i < n; ++i) {
		if (arr[i] < minv) minv = arr[i];
		if (arr[i] > maxv) maxv = arr[i];
		sum += arr[i];
	}
	*min_val = minv;
	*max_val = maxv;
	*mean = sum / n;
}
int main() {
	const int N = 5;
	float arr[N];
	for (int i = 0; i < N; ++i) {
		if (!(std::cin >> arr[i])) return 0;
	}

	float minv, maxv, meanv;
	calc_stat(arr, N, &minv, &maxv, &meanv);

	std::cout << minv << ' ' << maxv << ' ' << meanv << std::endl;
	return 0;
}