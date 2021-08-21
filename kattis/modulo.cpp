#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int num, n=10;
	set<int> s;
	while(n--) {
		cin >> num;
		s.insert(num % 42);
	}
	cout << s.size();
	return 0;
}
