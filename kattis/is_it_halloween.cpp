#include <bits/stdc++.h>
using namespace std;

int main() {
	string m;
	int d;
	cin >> m >> d;
	if (m == "OCT" && d == 31) 
		cout << "yup\n";
	else if (m == "DEC" && d == 25)
		cout << "yup\n";
	else
		cout << "nope\n";
	return 0;
}
