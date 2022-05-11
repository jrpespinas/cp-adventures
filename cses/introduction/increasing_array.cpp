#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    ll arr[n];
    for(auto &i: arr) cin >> i; 
    ll ans=0;
    for(int i=1; i<n; i++) {
        while(arr[i] < arr[i-1]) {
            ll ops = arr[i-1] - arr[i];
            arr[i] += ops;
            ans += ops;
        }
    }
    cout << ans;
}
