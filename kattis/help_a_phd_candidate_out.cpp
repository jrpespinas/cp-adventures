#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	string str;
	cin >> t;
	while(t--) {
		int a=0;
		cin >> str;
		if (str == "P=NP") {
			cout << "skipped" << "\n";	
			continue;
		}
		int size = str.size();
		string sa;
		for (int i=0; i<size; i++) {
			if (str[i] == '+') {
				a += stoi(sa);	
				sa = "";
			}
			sa.push_back(str[i]);
		}
		a += stoi(sa);	
		cout << a << "\n";
	}
	return 0;
}
