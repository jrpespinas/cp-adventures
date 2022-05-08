#include<bits/stdc++.h>
using namespace std;

#define newl "\n"

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(2);

    int a;
    float b;
    cin >> a >> b;
    if ((a%5==0) && (b-a-0.5>=0)) {
        cout << fixed << b-a-0.5 << newl;
    } else {
        cout << fixed << b << newl;
    }
    return 0;
}
