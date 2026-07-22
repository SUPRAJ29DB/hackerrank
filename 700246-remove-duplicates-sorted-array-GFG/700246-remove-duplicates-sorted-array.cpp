class Solution {
public:
    vector<int> removeDuplicates(vector<int>& arr) {

        vector<int> ans;

        if (arr.empty())
            return ans;

        ans.push_back(arr[0]);

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] != arr[i - 1]) {
                ans.push_back(arr[i]);
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna