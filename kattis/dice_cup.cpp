#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
    cin >> n >> m;
	if (m > n)
		swap(n, m);
	for (int i=m+1; i<=n+1; i++)
		cout << i << "\n";
	return 0;
}
