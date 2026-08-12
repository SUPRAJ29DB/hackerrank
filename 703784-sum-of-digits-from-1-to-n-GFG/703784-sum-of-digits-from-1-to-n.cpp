class Solution {
  public:
    int sumOfDigits(int n) {
        // code here
        vector<int>dp(n+1);
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            int x=i;
            int sum=0;
            while(x>0){
                sum+=x%10;
                x=x/10;
            }
            dp[i]=dp[i-1]+sum;
        }
        return dp[n];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna