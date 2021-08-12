#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, factorial;
	cin >> n;
	while(n--) {
		cin >> factorial;
		int f = 1;
		for (int i=2; i<=factorial; i++) {
			f *= i;
		}
		cout << f % 10 << " ";
	}
	return 0;
}
