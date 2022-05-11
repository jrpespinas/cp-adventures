#include <bits/stdc++.h>
using namespace std;
 
#define newl "\n"
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
 
void solve() {
    int t;
    cin >> t;
    vi arr(t);
    for(auto &i: arr) cin >> i;
    int ans=0;
    sort(arr.begin(), arr.end());   
    for(int i=1; i<t; i++) {
        ans += (arr[i] - arr[0]);
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
