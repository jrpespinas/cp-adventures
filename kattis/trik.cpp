#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;	
	cin >> str;
	int size=str.size();		
	int arr[3] = {1,0,0};	
	for (int i=0; i<size; i++) {	
		if (str[i] == 'A') {
			swap(arr[0], arr[1]);
		} else if (str[i] == 'B') {
			swap(arr[1], arr[2]);
		} else if (str[i] == 'C') {
			swap(arr[2], arr[0]);	
		}
	}	
	for (int i=0; i<3; i++) {
		if (arr[i] == 1) {
			cout << i+1;
			break;
		}
	}
	return 0;
}
