class Solution {
public:
    int maxProduct(vector<int> &arr) {

        int n = arr.size();

        int prefix = 1;
        int suffix = 1;

        int ans = INT_MIN;

        for (int i = 0; i < n; i++) {

            if (prefix == 0)
                prefix = 1;

            if (suffix == 0)
                suffix = 1;

            prefix *= arr[i];

            suffix *= arr[n - 1 - i];

            ans = max(ans, max(prefix, suffix));
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna