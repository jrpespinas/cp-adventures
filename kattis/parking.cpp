#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t, p, num;
	cin >> t;
	while(t--) {
		cin >> p;
		int max=INT_MIN, min=INT_MAX;
		for (int i=0; i<p; i++) {	
			cin >> num;
			if (num > max) 
				max = num;	
			if (num < min)
				min = num;		
		}
		cout << (max-min) * 2 << "\n";
	}
    return 0;
}
