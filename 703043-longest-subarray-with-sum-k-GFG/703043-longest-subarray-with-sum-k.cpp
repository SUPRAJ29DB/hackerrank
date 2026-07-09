class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<int, int> mp; // Stores {prefix_sum, first_occurrence_index}
        int current_sum = 0;
        int max_len = 0;

        for (int i = 0; i < arr.size(); i++) {
            current_sum += arr[i];

            // Case 1: Subarray starting from index 0
            if (current_sum == k) {
                max_len = i + 1;
            }

            // Case 2: Check if (current_sum - k) exists in the map
            if (mp.find(current_sum - k) != mp.end()) {
                max_len = max(max_len, i - mp[current_sum - k]);
            }

            // Case 3: Only add current_sum to map if it's not already present
            // This ensures we keep the left-most index for the maximum length
            if (mp.find(current_sum) == mp.end()) {
                mp[current_sum] = i;
            }
        }

        return max_len;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna