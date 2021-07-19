#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n=1, sum=0;
	char b;
	string suit;
	cin >> n >> b;
	n *= 4;
	while (n--) { 
		cin >> suit;
		switch(suit[0]) {
			case 'A': sum += 11; break;
			case 'K': sum += 4; break;
			case 'Q': sum += 3; break;
			case 'J': sum += 2; break;
			case 'T': sum += 10; break;
		}
		if (suit[1] == b) {
			switch(suit[0]) {
				case 'J': sum += 18; break;
				case '9': sum += 14; break;
			}
		}
	}
	cout << sum;
	return 0;
}
