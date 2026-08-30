class Solution {
  public:
    int countSquares(int n) {
        int count = sqrt(n);
        if (count * count == n) {
            return count - 1;
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna