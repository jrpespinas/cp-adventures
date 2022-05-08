#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;
    x -= a; 
    y -= b;
    if (x > 0) c -= x;
    if (y > 0) c -= y;
    if (c < 0) cout << "NO\n";
    else cout << "YES\n";

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
