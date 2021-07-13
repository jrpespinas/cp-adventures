#include <bits/stdc++.h>
using namespace std;

void solve(int c, int zr, int zc) {
	string s, b="";
	cin >> s;

	for(int j=0; j<c; j++) {	
		b += string(zc, s[j]);	
	}
	for(int i=0; i<zr; i++) {	
		 cout << b << "\n";
	}
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int r, c, zr, zc;	
	cin >> r >> c >> zr >> zc;
	for(int i=0; i<r; i++) {
		solve(c, zr, zc);
	}			
	return 0;
}
