class Solution {
  public:
    int maxSum(vector<int>& arr, int k) {
        
        int n = arr.size();
        vector<int> dp(n, 0);
        
        int ans = 0;
        
        for(int i = 0; i < n; i++) {
            
            if(arr[i] <= k) {
                
                if(i == 0)
                    dp[i] = arr[i];
                else
                    dp[i] = dp[i-1] + arr[i];
                
                ans = max(ans, dp[i]);
            }
            else {
                dp[i] = 0;
            }
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna