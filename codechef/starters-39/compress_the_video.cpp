#include <bits/stdc++.h>
using namespace std;

#define newl "\n"

typedef vector<int> vi;

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for(int &i: a) cin >> i;
    int frames=n;
    for(int i=0; i<n; i++) {
        if (a[i] == a[i+1]) frames--;
    }
    cout << frames << newl;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

