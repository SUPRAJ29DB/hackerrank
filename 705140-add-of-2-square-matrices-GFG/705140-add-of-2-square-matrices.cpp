class Solution {
  public:
    void addMat(vector<vector<int>>& a, vector<vector<int>>& b) {

        int n = a.size();

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                a[i][j] = a[i][j] + b[i][j];
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna