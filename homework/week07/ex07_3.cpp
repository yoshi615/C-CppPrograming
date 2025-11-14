#include <iostream>
using namespace std;
void merge_sorted(int* a, int na, int* b, int nb, int* out) {
	int i = 0, j = 0, k = 0;
	while (i < na && j < nb) {
		if (a[i] <= b[j]) out[k++] = a[i++];
		else out[k++] = b[j++];
	}
	while (i < na) out[k++] = a[i++];
	while (j < nb) out[k++] = b[j++];
}
int main() {
	int x[] = {3, 5, 8, 9};
	int y[] = {1, 5, 12, 13, 18};
	int out[9] = {0};
	merge_sorted(x, sizeof(x)/sizeof(x[0]), y, sizeof(y)/sizeof(y[0]), out);
	for (int i = 0; i < sizeof(out)/sizeof(out[0]); i++)
		cout << out[i] << (i + 1 == sizeof(out)/sizeof(out[0]) ? "" : " ");
	cout << endl;
	return 0;
}