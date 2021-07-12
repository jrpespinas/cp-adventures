#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
	queue<string> a1;
	stack<string> a2;
	string str;
	for(int i=0; i<n; i++){
		cin >> str;
		if (i%2==0) a1.push(str);
		else a2.push(str);
	}
	while(!a1.empty()) {
		cout << a1.front() << "\n";
		a1.pop();
	}
	while(!a2.empty()) {
		cout << a2.top() << "\n";
		a2.pop();
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	float n, count=1;
	while(cin>>n && n!=0) {		
		cout << "SET " << count <<"\n";	
		solve(n);
		count++;
	}
	return 0;
}
