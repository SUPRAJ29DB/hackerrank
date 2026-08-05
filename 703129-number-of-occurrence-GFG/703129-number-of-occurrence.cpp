class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
          int freq=0;
        for(int x:arr){
          
            if(x==target){
                freq++;
                
            }
        }
        return freq;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna