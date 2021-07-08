#include<stack>

class Solution {
public:
    int balancedStringSplit(string s) {
        stack<char> stack;
        int count = 0;
        
        for (int i = 0; i < s.length(); i++)
            if (stack.empty()){
                stack.push(s[i]);
                count++;
            }
            else if (stack.top() == s[i]){
                stack.push(s[i]);
            }
            else if (stack.top() != s[i]){
                stack.pop();
            }
        return count;
    }
};