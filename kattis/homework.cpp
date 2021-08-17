#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string in, act, val;	
	int p=0;
	getline(cin, in);
	stringstream X(in);	
	while (getline(X, act, ';')) {
		size_t found = act.find("-");
		if (found != string::npos) {
			stringstream Y(act);
			int a=0, b=0;
			while (getline(Y, val, '-')) {	
				a = stoi(val);
				b += a;
			}
			b = (2*a) - b + 1;
			p += b;
		}
		else {
			p++;
		}
	}	
	cout << p;
	return 0;
}
