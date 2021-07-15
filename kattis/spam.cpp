#include <bits/stdc++.h>
using namespace std; 


int main() {
	string str;
	cin >> str;
	int size = str.size();
	double lc=0, uc=0, ws=0, sym=0;
	for(int i=0; i<size; i++) {
		if (islower(str[i]))
			lc++;	
		else if (isupper(str[i]))
			uc++;
		else if (str[i] == '_')
			ws++;
		else
			sym++;
	}
	cout << ws / size << "\n";
	cout << lc / size << "\n";
	cout << uc/ size << "\n"; 
	cout << sym / size << "\n";
	return 0;
}
