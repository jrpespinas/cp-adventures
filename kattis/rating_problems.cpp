#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, given, sum=0;
	float max=0, min=0;
	cin >> n >> k;
	for(int i=0; i<k; i++) {
		cin >> given;
		sum += given;
	}
	min = sum + ((n-k) * -3);
	max = sum + ((n-k) * 3);
	cout << min/n << " " << max/n;
	return 0;
}
