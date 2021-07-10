#include <iostream> 
using namespace std;

int main() {
	int n;
	float x, y, qa=0.0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x >> y;
		qa += (x * y);
	}
	cout << qa;
	return 0;
}
