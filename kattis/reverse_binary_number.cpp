#include <bits/stdc++.h>
using namespace std;

string toBinary(int a) {
	string rb = "";
	while (a > 0) {
		rb += to_string(a % 2);
		a = a/2;
	}
	return rb;
}


int main() {
	int a;
	string b, rb;
	cin >> a;
	b = toBinary(a);
	cout << stoi(b, 0, 2);
	return 0;
}
