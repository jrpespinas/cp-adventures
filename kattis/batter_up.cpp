#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	double num, ave=0, sum=0;
	cin >> n;
	while(n--) {
		cin >> num;
		if (num < 0)
			continue;
		sum += num;
		ave++;
	}
	cout << sum/ave;
	return 0;
}
