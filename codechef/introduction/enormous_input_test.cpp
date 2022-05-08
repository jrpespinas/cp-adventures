#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, div=0;
    cin >> n >> k;
    while(n--) {
        int num;
        cin >> num;
        if (num%k==0) div++;
    }
    cout << div;
}
