#include <bits/stdc++.h>
using namespace std;

int score() {
	int n=0, val;
	for(int i=0; i<4; i++){
		cin >> val;
		n += val;
	}
	return n;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int p=0, sum=0, val;
	for(int i=1; i<=5; i++) {
		val=score();
		if (val > sum) {
			sum=val;	
			p=i;
		}
	}
	cout << p << " " << sum;
	return 0;
}
