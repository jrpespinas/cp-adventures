#include <bits/stdc++.h>
using namespace std;

#define newl "\n"

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

int cost(string &a, string &b) {
    int val=0;
    int size = a.size();
    for (int i=0; i<size; i++) {
        val += abs(a[i] - b[i]);
    }
    return val;
}

void solve() {
    int n, len;
    cin >> n >> len;
    vector<string> vec(n);
    for(auto &i: vec) cin >> i;

    int ans=INT_MAX;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            ans = min(ans, cost(vec[i], vec[j]));
        }
    }
    cout << ans << newl;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while(n--) solve();

    return 0;
}

