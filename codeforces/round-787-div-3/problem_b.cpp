#include <bits/stdc++.h>
using namespace std;

#define newl "\n";

typedef vector<int> vi;

void solve() {
    int t;
    cin >> t;
    vi a(t);
    for(auto &i: a) cin >> i;
    int ans=0;
    for(int i=t-2; i>=0; i--) {
        while(a[i] >= a[i+1] && a[i] > 0) {
            a[i] /= 2;
            ans++;
        }
        if (a[i] == a[i+1]) {
            cout << -1 << newl;
            return;
        }
    }
    cout << ans << newl;
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
