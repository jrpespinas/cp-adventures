#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	double cost, n, l, w, total=0;
	cin >> cost >> n;
	while(n--) {
		cin >> l >> w;
		total = total+(cost*(l*w));
	}
	printf("%.7f", total);
	return 0;
}
