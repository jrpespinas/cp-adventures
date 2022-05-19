#include <bits/stdc++.h>
using namespace std;

#define newl "\n"

void solve() {
    int x, y;
    cin >> x >> y;
    int a=500, b=1000;
    int x1 = a - (x*2);
    int y1 = b - ((y+x)*4);
    int x2 = a - ((x+y)*2);
    int y2 = b - (y*4);
    cout << max(x1+y1, x2+y2) << newl;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
