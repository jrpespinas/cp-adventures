#include <iostream>
using namespace std;

void sort(int &a, int &b) {
	if (a > b) swap(a,b);
}

int main() {
	int a, b;
	cin >> a >> b;
	sort(a,b);
	cout << a << " " << b;
	return 0;
}
