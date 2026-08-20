class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {

        int lastX = -1;
        int lastY = -1;
        int ans = INT_MAX;

        for(int i = 0; i < arr.size(); i++) {

            if(arr[i] == x) {
                lastX = i;
            }

            if(arr[i] == y) {
                lastY = i;
            }

            // Both have been found
            if(lastX != -1 && lastY != -1) {
                ans = min(ans, abs(lastX - lastY));
            }
        }

        if(ans == INT_MAX)
            return -1;

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna