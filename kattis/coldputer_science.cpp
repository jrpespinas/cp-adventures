#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, count=0, temp;
	cin >> n;
	while(n--) {
		cin >> temp;
		if (temp < 0)
			count++;
	}
	cout << count;
	return 0;
}
