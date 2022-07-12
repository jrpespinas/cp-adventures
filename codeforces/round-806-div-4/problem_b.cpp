#include <bits/stdc++.h>
using namespace std;

#define newl "\n"

void solve() {
    int size;
    string p;
    cin >> size >> p;
    unordered_map<char,int> mp;
    int sum=0;
    for(int i=0;i<size;i++) {
        if (mp[p[i]] == 0) {
            mp[p[i]]++;
            sum += 2;
        }
        else if (mp[p[i]] != 0)
            sum += 1;
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
