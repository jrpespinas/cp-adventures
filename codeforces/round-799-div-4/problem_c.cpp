#include <bits/stdc++.h>
using namespace std;

#define newl "\n"

void solve() {
    int rows=8, cols=8;
    string arr[rows];
    for(auto &str: arr) cin >> str;

    for(int i=1; i<rows-1; i++) {
        for(int j=1; j<cols-1; j++) {
            if (arr[i][j] == '#') {
                if ('#' == arr[i-1][j-1] && '#' == arr[i-1][j+1] && '#' == arr[i+1][j-1] && '#' == arr[i+1][j+1])
                    cout << i+1 << " " << j+1 << newl;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t; 
    while(t--) solve();
    return 0;
}
