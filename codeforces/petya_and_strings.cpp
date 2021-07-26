#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a, b;
	cin >> a >> b;
	transform(a.begin(), a.end(), a.begin(), ::toupper);
	transform(b.begin(), b.end(), b.begin(), ::toupper);
	cout << a.compare(b);
	return 0;
}
