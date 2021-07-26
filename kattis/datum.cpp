#include <bits/stdc++.h>
using namespace std;

int main() {
	int d, m;
	cin >> d >> m;
	d--;
	string days[] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
	int months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
	for(int i=0; i<m; i++) {
		d += months[i];
	}
	cout << days[d%7];
	return 0;
}
