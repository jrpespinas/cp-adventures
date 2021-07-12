#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, val=0;
	cin >> x;
	string op;
	for(int i=0; i<x; i++) {
		cin >> op;
		if (op.compare("++X") == 0 || op.compare("X++") == 0)
			++val;
		else
			--val;
	}
	cout << val;
	return 0;
}
