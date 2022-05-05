#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, num, sum = 0;
    cin >> n;
    for (int i = 0 ; i < n - 1 ; i++) {
        cin >> num;
        sum += num;
    }
    cout << (( n * (n + 1) ) / 2) - sum << endl;

    return 0;
}
