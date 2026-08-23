class Solution {
  public:
    bool sumOfRowCol(vector<vector<int>> &mat) {

        int n = mat.size();       
        int m = mat[0].size();    

        int limit = (n < m) ? n : m;

        for(int i = 0; i < limit; i++) {

            int rowSum = 0;
            int colSum = 0;

            for(int j = 0; j < m; j++) {
                rowSum += mat[i][j];
            }

            for(int j = 0; j < n; j++) {
                colSum += mat[j][i];
            }

            if(rowSum != colSum) {
                return false;
            }
        }

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna