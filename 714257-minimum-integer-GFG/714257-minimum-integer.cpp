class Solution {
  public:
    int minimumInteger(vector<int>& arr) {
        // code here
        int n = arr.size();
        long long sum = 0;

        for (int num : arr) {
            sum += num;
        }

        int ans = INT_MAX;

        for (int x : arr) {
            if (sum <= (long long)n * x) {
                ans = std::min(ans, x);
            }
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna