#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int W, N, area=0;	
	cin >> W >> N;
	while(N--) {
		int w, l;
		cin >> w >> l;
		area += (w * l);
	}
	cout << area / W;
	return 0;
}
