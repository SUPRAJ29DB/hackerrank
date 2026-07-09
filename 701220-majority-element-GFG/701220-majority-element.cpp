class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int count = 0;
        int candidate = 0;
        
        // Phase 1: Find a candidate
        for (int i : arr) {
            if (count == 0) {
                candidate = i;
            }
            if (candidate == i) {
                count++;
            } else {
                count--;
            }
        }
        
        // Phase 2: Verify the candidate
        int actualCount = 0;
        for (int i : arr) {
            if (i == candidate) {
                actualCount++;
            }
        }
        
        // Check if the candidate's frequency is strictly greater than arr.size() / 2
        if (actualCount > arr.size() / 2) {
            return candidate;
        }
        
        return -1; // No majority element exists
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna