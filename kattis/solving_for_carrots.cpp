#include <iostream>
using namespace std;

int main() {
	int n, p, i=0;
	string d;
	cin >> n >> p;
	while(i<n) {
		getline(cin, d);
		i++;
	}
	cout << p;
	return 0;
}
