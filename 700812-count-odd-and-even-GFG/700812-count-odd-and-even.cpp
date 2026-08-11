class Solution {
  public:
    pair<int, int> countOddEven(vector<int> &arr) {
        int odd_count = 0;
        int even_count = 0;
        
        for (int num : arr) {
            if (num % 2 != 0) {
                odd_count++;
            } else {
                even_count++;
            }
        }
        
        return {odd_count, even_count};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna