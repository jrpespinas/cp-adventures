#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	
	int arr[n];
	int ans=0;
	for (int i=0; i<n; i++)
		cin >> arr[i];
	for (int i=0; i<n; i++) {
		if (arr[i] >= arr[k-1] && arr[i] != 0)
			ans++;
	}

	cout << ans;

	return 0;
}
