class Solution {
public:
    void rotateArr(vector<int>& arr, int k) {

        int n = arr.size();

        k = k % n;

     

        reverse(arr.begin(), arr.begin() + k);

        reverse(arr.begin() + k, arr.end());
           reverse(arr.begin(), arr.end());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna