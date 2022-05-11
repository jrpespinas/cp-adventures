#include <bits/stdc++.h>
using namespace std;

#define newl "\n"

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

void solve() {
    string str;
    cin >> str;
    int left=0, right=0;
    for(int i=0; i<6; i++) {
        if (i < 3) 
            left += (str[i] - '0');
        else
            right += (str[i] - '0');
    }
    if (right == left) cout << "YES\n";
    else cout << "NO\n";
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while(n--) solve();

    return 0;
}
