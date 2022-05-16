#include <bits/stdc++.h>
using namespace std;

int solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a+b+c > 1) return 1;
    else return 0;
}

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, sum=0;
    cin >> t;
    while(t--) sum += solve();
    cout << sum;
    return 0;
}
