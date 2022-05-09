#include <bits/stdc++.h>
using namespace std;

#define newl "\n"

void solve() {
    int a, b, x;
    cin >> a >> b >> x;
    cout << (b-a) / x << newl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
