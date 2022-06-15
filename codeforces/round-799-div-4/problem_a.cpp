#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c,d, sum=0;
    cin >> a >> b >> c >> d;
    if (a < b) sum++;
    if (a < c) sum++;
    if (a < d) sum++;
    cout << sum << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
