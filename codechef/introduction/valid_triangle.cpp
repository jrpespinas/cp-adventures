#include <bits/stdc++.h>
using namespace std;

#define newl "\n"

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a+b+c == 180) 
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}   
