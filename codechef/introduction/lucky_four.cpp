#include <bits/stdc++.h>
using namespace std;

#define newl "\n"

void solve() {
    int n, l=0;
    cin >> n;
    while(n!=0) {
        if (n%10 == 4) l++;
        n /= 10;
    }
    cout << l << newl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
