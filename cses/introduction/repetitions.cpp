#include <bits/stdc++.h>
using namespace std;

int main() {
    string sequence;
    cin >> sequence;

    int size=sequence.length();
    int reps=1;
    int mxsubstring = 0;
    
    for(int i=0; i<size; i++) {
        if(sequence[i] == sequence[i+1]) reps++;
        else {
            mxsubstring = max(mxsubstring, reps);
            reps =1;
        }
    }
    cout << mxsubstring;
    return 0;
}
