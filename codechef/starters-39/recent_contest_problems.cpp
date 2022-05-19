#include <bits/stdc++.h>
using namespace std;

#define newl "\n"

void solve() {
    unordered_map<string, int> con;
    con["START38"]=0;
    con["LTIME108"]=0;

    int r;
    cin >> r;
    string str;
    while(r--) {
        cin >> str;
        con[str]++;
    }
    cout << con["START38"] << " " <<  con["LTIME108"] << newl;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
