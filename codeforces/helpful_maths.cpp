#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string eq;
	vector<int> nums;
	cin >> eq;
	int size=eq.size();
	for (int i=0; i<size; i++) {
		if (eq[i] != '+') {	
			nums.push_back(eq[i] - '0');
		}
	}
	sort(nums.begin(), nums.end());
	int vsize=nums.size();
	for (int i=0; i<vsize-1; i++)
		cout << nums[i] << "+";
	cout << nums[vsize-1];
	return 0;
}
