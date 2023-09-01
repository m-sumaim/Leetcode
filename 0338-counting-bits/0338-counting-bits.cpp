class Solution {
public:
// brute Force
    // int hammingWeight(uint32_t n) {
    //     int count = 0;
    //     for(int i=31; i>=0; i--)
    //     {
    //         uint32_t k = n>>i;
    //         if(k & 1)
    //             count++;
    //     }
    //     return count;
    // }

    // vector<int> countBits(int n) {
    //     vector<int> sol;
    //     for(int i=0; i<=n; i++)
    //     {
    //         int cnt = hammingWeight(i);
    //         sol.push_back(cnt);
    //     }
    //     return sol;
    // }
// Optimal
    vector<int> countBits(int n)
    {
        vector<int> dp(n+1);
        dp[0] = 0;
       
        for(int i=1; i<=n; i++)
        {
            dp[i] = dp[i/2] + i%2;
        }
        return dp;
    }
};