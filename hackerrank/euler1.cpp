#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll sequence(ll num, int diff=1) {
	return ((num/diff) * (2 * diff + (num/diff - 1) * diff)) / 2;
}

int main() {
	int n;
	cin >> n;
	while(n--) {
		ll num, d3, d5, db;
		cin >> num;
		num--;
		d3 = sequence(num, 3);
		d5 = sequence(num, 5);
		db = sequence(num, 15);
		cout << d3 + d5 - db << "\n";
	}
	return 0;
}
