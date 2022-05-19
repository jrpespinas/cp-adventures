#include <bits/stdc++.h>
using namespace std;

#define newl "\n"
typedef vector<int> vi;
typedef long long ll;

ll MOD=1e9 + 7;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    ll ans=1;
    for(int i=0;i<n;i++) {
        if (s[i] == 'c' || s[i] == 'g' || s[i] == 'l' || s[i] == 'r') {
            ans *= 2;
            ans %= MOD;
        }
    }
    cout << ans << newl;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
