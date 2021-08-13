#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, d, t=0;
	cin >> n;
	if (n%2==1) cout << "still running";
	else {
		while(n--) {	
			cin >> d; 
			if (n%2 == 0) 
				t += d;
			else
				t -= d;
		}
		cout << t;
	}
	return 0;
}
