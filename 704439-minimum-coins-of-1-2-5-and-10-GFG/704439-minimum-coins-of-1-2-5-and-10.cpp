class Solution {
  public:
    int findMin(int n) {
        // code here
           
            if (n<1) return n;
             vector<int>dp(n+1, INT_MAX);
             dp[0]=0;
             for(int i=1;i<=n;i++){
                 dp[i]=min(dp[i],dp[i-1]+1);
                 if(i>=2)
                  dp[i]=min(dp[i],dp[i-2]+1);
                  if(i>=5)
                   dp[i]=min(dp[i],dp[i-5]+1);
                   if(i>=10)
                    dp[i]=min(dp[i],dp[i-10]+1);
             }
             return dp[n];
             
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna