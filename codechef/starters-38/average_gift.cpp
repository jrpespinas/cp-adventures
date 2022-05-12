#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef set<int> si;

void solve() {
    int s, mean;
    cin >> s >> mean;
    int mn=INT_MAX, mx=INT_MIN;
    for(int i=0; i<s; i++) {
        int in;
        cin >> in;
        mn = min(mn, in);
        mx = max(mx, in);
    }

    if (mn <= mean && mx >= mean) cout << "YES\n";
    else cout << "NO\n";

}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
