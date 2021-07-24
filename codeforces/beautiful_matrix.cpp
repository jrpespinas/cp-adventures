#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int m[5][5];
	int r=0, c=0;
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			cin >> m[i][j];
			if (m[i][j] == 1) {
				r = i;
				c = j;
			}
		}
	}
	cout << abs(2-r) + abs(2-c);
	return 0;
}
