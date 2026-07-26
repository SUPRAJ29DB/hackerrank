class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        int n = arr.size();
        
        // Step 1: Sort the array
        sort(arr.begin(), arr.end());

        // Step 2: Fix the first element one by one
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            // Step 3: Two pointer search for the remaining two elements
            while (left < right) {
                int current_sum = arr[i] + arr[left] + arr[right];

                if (current_sum == target) {
                    return true;
                } else if (current_sum < target) {
                    left++; // Increase sum by moving left pointer right
                } else {
                    right--; // Decrease sum by moving right pointer left
                }
            }
        }

        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna