#include<bits/stdc++.h>
using namespace std;

#define newl "\n"

void solve() {
    int a, b;
    cin >> a >> b;
    if (a > b) cout << ">\n";
    else if (b > a) cout << "<\n";
    else cout << "=\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
