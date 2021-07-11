#include <iostream>
using namespace std; 

int main() {
	int arr[6] = {1, 1, 2, 2, 2, 8};
	int p;
	int size = sizeof(arr)/sizeof(arr[1]); 
	for(int i=0; i<size; i++) {
		cin >> p;
		arr[i] -= p;
	}

	for (int i=0; i<size; i++)
		cout << arr[i] << " ";

	return 0;
}
