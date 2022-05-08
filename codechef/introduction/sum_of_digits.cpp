#include<bits/stdc++.h>
using namespace std;

#define newl "\n"

void solve() {
    int a, sum=0;
    cin >> a;
    while(a!=0) {
        sum = sum + (a%10);
        a /= 10;
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
