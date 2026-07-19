class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {

        int n = arr.size();
        vector<int> ans;

        int maxi = arr[n - 1];
        ans.push_back(maxi);

        // Traverse from right to left
        for (int i = n - 2; i >= 0; i--) {

            if (arr[i] >= maxi) {
                maxi = arr[i];
                ans.push_back(arr[i]);
            }
        }

        // Reverse to restore original order
        reverse(ans.begin(), ans.end());

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna