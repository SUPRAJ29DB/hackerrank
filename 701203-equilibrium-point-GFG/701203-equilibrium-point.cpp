class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        long long sum=0;
        long long left_sum=0;
        long long right_sum;
        
        for(int x: arr){
            sum+=x;
        }
        for(int i=0;i<arr.size();i++){
            right_sum=sum-left_sum-arr[i];
            if(left_sum==right_sum){
                return i;
            }
            left_sum+=arr[i];
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna