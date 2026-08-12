class Solution {
  public:
    int maxSum(int n) {
        // code here.
        if(n==0||n==1) return n;
        vector<int>dp(n+1);
        dp[0]=0;
        dp[1]=1;
        
        for(int i=2;i<=n;i++){
            dp[i]=max(i, dp[i/2]+dp[i/3]+dp[i/4]);
        }
        return dp[n];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna