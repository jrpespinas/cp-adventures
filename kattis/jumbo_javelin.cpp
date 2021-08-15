#include <iostream>
using namespace std;

int main() {
	int n, d, r, rods=0;
	cin >> n;
	d = n-1;
	while(n--) {
		cin >> r;
		rods += r;
	}
	cout << rods-d;
	
	return 0;
}
