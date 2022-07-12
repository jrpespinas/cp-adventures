#include <bits/stdc++.h>
using namespace std;


void solve() {
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if (s == "yes") cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
