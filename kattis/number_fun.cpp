#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	float a, b, c;
	cin >> n;
	while(n--) {
		cin >> a >> b >> c;
		if (a+b == c || a*b == c || a-b == c || b-a == c || a/b == c || b/a == c)
			cout << "Possible\n";
		else
			cout << "Impossible\n";
	}
	return 0;
}
