#include <bits/stdc++.h>
using namespace std;

int main() {
	string in;
	cin >> in;
	bool magic = true;
	int size = in.size();
	unordered_map<char, int> m;
	m[in[0]]++;
	for (int i=1; i<size; i++) {
		if (m[in[i]] > 0) {
			magic = false;
			break;
		}
		m[in[i]]++;
	}
	cout << (magic == false ? 0 : 1);
	return 0;
}
