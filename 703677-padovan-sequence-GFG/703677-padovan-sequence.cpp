class Solution {
  public:
    int padovanSequence(int n) {
        
        if(n <= 2)
            return 1;
         const int MOD = 1000000007;
        vector<long long> dp(n + 1);
        
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 1;
        
        for(int i = 3; i <= n; i++) {
           dp[i] = (dp[i-2] + dp[i-3]) % MOD;
        }
        
        return dp[n];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna