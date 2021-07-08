#include <bits/stdc++.h>
using namespace std;

void solve() {
	int h, b, c=0;
	cin >> h >> b;

	int a[h];
	for(int i=0; i<h; i++)
		cin >> a[i];
	sort(a, a+h);
	for(int i=0;i<h;i++) {
		b -= a[i];
		if (b < 0) 
			break;
		c++;	
	}
	cout << c << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);		

	int n;
	cin >> n;
	for (int i=0;i<n;i++) {
		cout << "Case #" << i+1 << ": ";
		solve();
	}
	return 0;
}
