#include <bits/stdc++.h>
using namespace std;

void solve(){
	string txt;
	cin >> txt;

	int len = txt.size();
	if (txt.size() > 10) 
		cout << txt[0] << len-2 << txt[len-1] << "\n";
	else
		cout << txt << "\n";
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	
	for (int i=0; i<n; i++){
		solve();
	}	
	return 0;
}
