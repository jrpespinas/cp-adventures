#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

void printVector(vi subset) {
    int size = subset.size();
    for(int i=0; i<size; i++) {
        cout << subset[i] << " ";
    }
    cout << "\n";
}

void search(vi subset, int k, int n) {
    if (k > n) {
        printVector(subset);
        return;
    } else {

        cout << "Pushing\n";
        subset.push_back(k);
        cout << "search after push\n";
        search(subset,k+1,n);
        cout << "Popping\n";
        subset.pop_back();
        cout << "search after pop\n";
        search(subset,k+1,n);
    }
}

int main() {
    vi subset;
    search(subset,1,3);
    return 0;
}
