#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, h;
    cin >> x >> h;
    if (x >= h) cout << "YES\n";
    else cout << "NO\n";       
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int test;
    cin >> test;
    while(test--) {
        solve();
    }
    return 0;
}
