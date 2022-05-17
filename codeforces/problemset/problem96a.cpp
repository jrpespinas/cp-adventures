#include <bits/stdc++.h>
using namespace std;

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0);

    string team;
    cin >> team;
    int ans=1;
    int mx=INT_MIN;
    for(int i=1, size=team.length(); i<size; i++) {
        if(team[i] == team[i-1]) {
            ans++;
            mx = max(mx, ans);
        }
        else ans=1;
    }
    if (mx >= 7) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
