class Solution {
  public:
    double findMedian(vector<int> &arr) {
        int n = arr.size();

        sort(arr.begin(), arr.end());

        if (n % 2 != 0) {
            return arr[n / 2];
        }

        return (arr[(n / 2) - 1] + arr[n / 2]) / 2.0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna