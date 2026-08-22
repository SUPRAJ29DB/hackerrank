class Solution {
  public:
    string maxZero(vector<string> &arr) {

        int maxZero = 0;
        string ans = "-1";

        for(int i = 0; i < arr.size(); i++) {

            int count = 0;

            for(int j = 0; j < arr[i].size(); j++) {
                if(arr[i][j] == '0') {
                    count++;
                }
            }

            if(count > maxZero) {
                maxZero = count;
                ans = arr[i];
            }

            else if(count == maxZero && count > 0) {

                if(arr[i].size() > ans.size()) {
                    ans = arr[i];
                }
                else if(arr[i].size() == ans.size() && arr[i] > ans) {
                    ans = arr[i];
                }
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna