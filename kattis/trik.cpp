#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;	
	cin >> str;
	int size=str.size();		
	int arr[3] = {1,0,0};	
	int pos=1;
	for (int i=0; i<size; i++) {	
		if (str[i] == 'A') {
			swap(arr[0], arr[1]);
			if (arr[1] == 1) pos = 2;
			else if (arr[0] == 1) pos = 1;
		} else if (str[i] == 'B') {
			swap(arr[1], arr[2]);
			if (arr[2] == 1) pos = 3;
			else if (arr[1] == 1) pos = 2;
		} else if (str[i] == 'C') {
			swap(arr[2], arr[0]);	
			if (arr[0] == 1) pos = 1;
			else if (arr[2] == 1) pos = 3;
		}
	}	
	cout << pos;
	return 0;
}
