class Solution {
  public:
    int getMinSteps(int n) {
        // code here
        vector<int>dp(n+1);
        dp[1]=0;
        for(int i=2;i<=n;i++){
            dp[i]=1+dp[i-1];
            if(i%2==0){
             dp[i]= min(dp[i],1+dp[i/2]);
            }
            if(i%3==0){
                dp[i]= min(dp[i],1+dp[i/3]);
            }
        }
        return dp[n];
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna