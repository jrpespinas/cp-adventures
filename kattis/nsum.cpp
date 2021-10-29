#include <iostream>
using namespace std;

int main() {
	int i, n, sum=0;
	cin >> n;
	while(n--) {
		cin >> i;
		sum += i;
	}
	cout << sum;
	return 0;
}
