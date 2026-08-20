class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // code here
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            if (arr[i]>=0){
                ans.push_back(arr[i]);
            }
        }
         for(int i=0;i<arr.size();i++){
             if(arr[i]<0){
                 ans.push_back(arr[i]);
             }
         }
         for(int i = 0; i < arr.size(); i++) {
         arr[i] = ans[i];
         }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna