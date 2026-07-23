class Solution {
public:
    bool isSubset(vector<int> &a, vector<int> &b) {

        unordered_map<int, int> mp;

        // Store frequency of elements in a
        for (int x : a) {
            mp[x]++;
        }

        // Check every element of b
        for (int x : b) {

            if (mp[x] == 0)
                return false;

            mp[x]--;
        }

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna