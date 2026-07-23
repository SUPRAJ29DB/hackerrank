class Solution {
public:
    vector<int> findTwoElement(vector<int>& arr) {

        int n = arr.size();

        vector<int> freq(n + 1, 0);

        for (int x : arr)
            freq[x]++;

        int repeating = -1;
        int missing = -1;

        for (int i = 1; i <= n; i++) {

            if (freq[i] == 2)
                repeating = i;

            if (freq[i] == 0)
                missing = i;
        }

        return {repeating, missing};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna