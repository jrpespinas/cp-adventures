#include <iostream>
using namespace std;

int main() {
	char c[3] = {'P','E','R'};
	string s;
	cin >> s;
	int size = s.size();
	int count = 0;
	for(int i=0, j=0; i<size; i++, j++) {
		if (s[i] != c[j]) 
			count++;	
		if (j == 2) 
			j = -1;	
	}
	cout << count;
	return 0;
}
