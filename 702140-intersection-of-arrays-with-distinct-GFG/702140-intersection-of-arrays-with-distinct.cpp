class Solution {
  public:
    int intersectSize(vector<int>& a, vector<int>& b) {
        unordered_set<int> st(a.begin(), a.end());
        int count = 0;

        for (int x : b) {
            if (st.count(x)) {
                count++;
            }
        }

        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna