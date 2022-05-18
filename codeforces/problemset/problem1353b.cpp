#include <bits/stdc++.h>
using namespace std;

#define newl "\n"

void solve() {
    int n, k;
    cin >> n >> k;
    int a[n], b[n];
    for(int &i: a) cin >> i;
    for(int &i: b) cin >> i;
    sort(a, a+n, greater<>());
    sort(b, b+n);
    for(int i=n-1; i>=n-k; i--) {
        if (a[i] < b[i])
            swap(a[i], b[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++) {
        sum += a[i];
    }
    cout << sum << newl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; 
    cin >> t;
    while(t--) solve();
    return 0;
}
