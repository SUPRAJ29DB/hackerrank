class Solution {
public:
    vector<int> getMinMax(vector<int> &arr) {

        int mini = arr[0];
        int maxi = arr[0];

        for (int i = 1; i < arr.size(); i++) {

            if (arr[i] < mini)
                mini = arr[i];

            if (arr[i] > maxi)
                maxi = arr[i];
        }

        return {mini, maxi};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna