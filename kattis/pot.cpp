#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

void solve() {
	ll n, power, num, sum=0;
	cin >> n;
	while(n--) {
		cin >> num;
		power = num % 10;
		num /= 10;
		sum += pow(num, power);
	}
	cout << sum << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
