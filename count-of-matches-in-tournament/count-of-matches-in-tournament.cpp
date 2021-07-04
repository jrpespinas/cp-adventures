class Solution {
public:
    int numberOfMatches(int n) {
        // Using mathematics and logic: return n-1;

        int matches = 0;
        while (n != 1) {
            if (n%2 == 1) {
                n /= 2;
                matches += n;
                n += 1;
                
            }
            else {
                n /= 2;
                matches += n;
            }
        }
        return matches; 
    }
};
