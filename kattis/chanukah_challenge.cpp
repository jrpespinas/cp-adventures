#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i, c;
	cin >> n;
	while(n--) {
		cin >> i >> c;
		cout << i << " " << ((c * (c + 1)) / 2) + c << "\n";
	}
	return 0;
}
