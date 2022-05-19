#include <bits/stdc++.h>
using namespace std;

#define newl "\n"

void solve() {
    int x, y;
    cin >> x >> y;
    int rating=0;
    while(x<y) {
        x += 8;
        rating++;
    }
    cout << rating << newl;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
