#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<bool> locker(101, false);
	for (int person = 1; person <= 100; ++person) {
		for (int i = person; i <= 100; i += person) {
			locker[i] = !locker[i];
		}
	}

	bool first = true;
	for (int i = 1; i <= 100; ++i) {
		if (locker[i]) {
			if (!first) cout << ' ';
			cout << i;
			first = false;
		}
	}
	cout << '\n';

	return 0;
}