#include <bits/stdc++.h>
using namespace std;

void solve() {
	set<string> s;
	int c;
	string city;
	cin >> c;
	while(c--) {
		cin >> city;
		s.insert(city);
	}
	cout << s.size() << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	while(n--)
		solve();
	return 0;
}
