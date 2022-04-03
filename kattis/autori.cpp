#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string w;
    cin >> w;
    int len = w.length();
    for (int i=0; i<len; i++) {
        if (isupper(w[i])) cout << w[i];
    }
    return 0;
}
