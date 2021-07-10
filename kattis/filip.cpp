#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
	int reversedNum = 0;
	while(x != 0) {
		reversedNum = (reversedNum * 10) + (x % 10);
		x /= 10;
	}
	return reversedNum;
}
int main() {
	int x, y;
	cin >> x >> y;
	cout << max(reverse(x), reverse(y));
	return 0;
}
