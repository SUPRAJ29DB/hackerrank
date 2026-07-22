class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
      int s=0;
      long long sum=0;
      for(int i=0;i<arr.size();i++){
          sum+=arr[i];
          while(sum>target && s<i){
              sum-=arr[s];
              s++;
          }
          if (sum==target){
              return {s+1, i+1};
          }
      }
      return {-1};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna