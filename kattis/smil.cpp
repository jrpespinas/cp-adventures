#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int length = s.length();
    for (int i=0; i<length; i++) {
        if (s[i] == ':' || s[i] == ';') {
            if (s[i+1] == ')') cout << i << "\n";
            else if (s[i+1] == '-' && s[i+2] == ')')  cout << i << "\n";
        } else { continue; }
        
    }
    return 0;
}
