class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        vector<int>ans;
        for(int i=0;i<arr.size();i+=2){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna