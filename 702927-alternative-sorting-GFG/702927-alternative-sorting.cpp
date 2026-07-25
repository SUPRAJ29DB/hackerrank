class Solution {
public:
    vector<int> alternateSort(vector<int>& arr) {

        sort(arr.begin(), arr.end());

        vector<int> ans;

        int left = 0;
        int right = arr.size() - 1;

        while (left < right) {
            ans.push_back(arr[right--]); // Largest
            ans.push_back(arr[left++]);  // Smallest
        }

        // For odd number of elements
        if (left == right)
            ans.push_back(arr[left]);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna