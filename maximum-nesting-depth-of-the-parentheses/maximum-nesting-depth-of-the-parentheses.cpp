#include <stack>

class Solution {
public:
    int maxDepth(string s) {
        stack<char> stack;
        int count = 0;
        
        int length = s.size();
        for (int i = 0; i < length; i++) {
            if (s[i] == '(') {
                stack.push(s[i]);
                if (stack.size() > count) count = stack.size();
            }
            else if (s[i] == ')') {
                stack.pop();
            }
        }
        return count;
    }
};