#include <bits/stdc++.h>
using namespace std;

#define newl "\n"

void solve() {
    char id;
    cin >> id;
    if (tolower(id) == 'b') cout << "BattleShip\n";
    else if (tolower(id) == 'c') cout << "Cruiser\n";
    else if (tolower(id) == 'd') cout << "Destroyer\n";
    else if (tolower(id) == 'f') cout << "Frigate\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}   
