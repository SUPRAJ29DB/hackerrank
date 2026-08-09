class Solution {
  public:
    vector<int> fibonacciNumbers(int n) {
        // code here
        int mod = 1e9 + 7;
        vector<int>dp(n+1);
        // if(n<=1){
        //   return n;  
        // } 
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=(dp[i-1]+dp[i-2])%mod;
        }
        return dp;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna