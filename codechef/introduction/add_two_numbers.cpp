#include<iostream>
using namespace std;

#define newl "\n"

void solve() {
    int a, b;
    cin >> a >> b;
    cout << a + b << newl;
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
