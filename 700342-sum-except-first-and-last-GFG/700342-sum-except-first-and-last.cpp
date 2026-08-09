class Solution {
  public:
    int sumExceptFirstLast(vector<int>& arr) {
        int n=arr.size();
        if(n<=2) return 0;
        // code here
        vector<int>dp(n,0);
        dp[1]=arr[1];
        for(int i=2;i<n-1;i++){
            dp[i]=dp[i-1]+arr[i];
        }
        return dp[n-2];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna