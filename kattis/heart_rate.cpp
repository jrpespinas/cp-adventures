#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, b;
	float p;
	cin >> n;
	while(n--) {
		cin >> b >> p;
		double var = 60 / p;
		double abpm = (60 * b) / p;
		printf("%.4f %.4f %.4f\n", abpm-var, abpm, abpm+var);
	}
	return 0;
}
