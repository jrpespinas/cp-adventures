#include <iostream>
using namespace std;

void solve(){
	int c;
	cin >> c;
	int o, sum = 0;
	for(int i=0; i<c; i++) {
		cin >> o;
		sum += o;
	}
	cout << sum - (c - 1) << "\n";
}

int main() {
	int n, i=0;
	cin >> n;
	while(i < n) {
		solve();	
		i++;
	}
	return 0;
}
