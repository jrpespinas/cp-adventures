class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int isize = accounts.size();
        int sum = 0;
        int maxcus = 0;
        for(int i=0; i<isize; i++) {
            int jsize = accounts[i].size();
            for(int j=0; j<jsize; j++) {
                sum += accounts[i][j];
            }
            maxcus = max(maxcus, sum);
            sum = 0;
        }
        return maxcus;
    }
};
