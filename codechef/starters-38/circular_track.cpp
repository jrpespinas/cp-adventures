#include <bits/stdc++.h>
using namespace std;

#define newl "\n"

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << min(abs(a-b), c - abs(a-b)) << newl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
