class Solution {
  public:
    bool findTriplets(vector<int> &arr) {
        int n = arr.size();
        
        // Sort the array to use two-pointer technique
        sort(arr.begin(), arr.end());
        
        // Fix the first element and search for the remaining two
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                int sum = arr[i] + arr[left] + arr[right];
                
                if (sum == 0) {
                    return true;
                } else if (sum < 0) {
                    left++; // Increase sum
                } else {
                    right--; // Decrease sum
                }
            }
        }
        
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna