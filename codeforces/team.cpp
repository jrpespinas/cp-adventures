#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, sum, ans=0;
	int t[3];
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> t[0] >> t[1] >> t[2];
		sum = t[0] + t[1] + t[2];
		if (sum >= 2)
			ans++;
	}
	
	cout << ans;
	return 0;
}
