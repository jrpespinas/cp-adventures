#include <iostream>
using namespace std;

int main() {
	int x, n, sum=0, mb;
	cin >> x >> n;
	for(int i=0; i<n; i++){
		cin >> mb;
		sum += (x - mb);	
	}
	cout << sum + x;
	return 0;
}	
