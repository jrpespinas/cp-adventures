#include <bits/stdc++.h>

class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> a;
        
        if (sentence.size() < 26) return false;
        
        for (int i=0; i<sentence.size(); i++)
        {
            a.insert(sentence[i]);
        }
        
        if (a.size() == 26) return true;
        return false;
    }
};