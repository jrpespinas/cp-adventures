#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, sum=0, given;
	float max=0, min=0;
	cin >> n >> k;
	for(int i=0; i<k; i++){
		cin >> given;
		sum += given;
	}
	max = sum;
	min = sum;
	for(int i=0; i<n-k; i++) {
		max = max + 3;
	 	min = min - 3;
	}
	cout << min/n << " " << max/n;
	return 0;
}
