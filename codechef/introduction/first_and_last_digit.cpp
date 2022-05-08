#include <bits/stdc++.h>
using namespace std;

#define newl "\n"

void solve() {
    int a, first, last;
    cin >> a;
    first = a%10;
    while(a != 0) {
        last = a%10;
        a /= 10;
    }
    cout << first + last << newl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
