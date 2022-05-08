
#include<bits/stdc++.h>
using namespace std;

#define newl "\n"

void solve() {
    int a, rev=0;
    cin >> a;
    while(a!=0) {
        rev *= 10;
        rev += (a%10);
        a /= 10;
    }
    cout << rev << newl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
