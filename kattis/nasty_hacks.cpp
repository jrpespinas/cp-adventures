#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, r, e, c;
	cin >> n;
	while(n--) {
		cin >> r >> e >> c;
		if (r + c == e) cout << "does not matter\n";
		else if (r + c < e) cout << "advertise\n";
		else cout << "do not advertise\n";
	}
	return 0;
}
