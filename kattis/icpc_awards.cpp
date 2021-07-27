#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	string inst, name;
	queue<pair<string, string>> teams;
	unordered_map<string, int> winners;
	cin >> n;
	while(n--) {
		cin >> inst >> name;
		if (winners.count(inst))
			continue;
		else {
			winners[inst] = 1;
			teams.push({inst, name});
		}

	}
	cout << "\n\n\n";
	for (int i=0; i<12; i++) {
		cout << teams.front().first << " " << teams.front().second << "\n";
		teams.pop();
	}
	return 0;
}
