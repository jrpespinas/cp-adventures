#include <bits/stdc++.h>
using namespace std;

#define newl "\n"

typedef vector<int> vi;
typedef set<int> si;
typedef long long ll;

void solve() {
    int n;
    cin >> n;

    ll a[n], b[n];
    for(auto &i: a) cin >> i;
    for(auto &i: b) cin >> i;
    
    map<pair<ll, ll>, int> gp;
    ll ans = 0;
    for(int i=0; i<n; i++) {
        ans += gp[{a[i], b[i]}];
        gp[{b[i], a[i]}]++;
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
