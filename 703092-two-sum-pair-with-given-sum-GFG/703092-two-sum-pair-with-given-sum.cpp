class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here( hash map)
        // unordered_map<int, int> mp;
        // for (int i=0;i<arr.size();i++){
        //     int need=target-arr[i];
        //     if(mp.find(need)!=mp.end()){
        
        //two pointer approach
        sort(arr.begin(), arr.end());

        int left=0, right=arr.size()-1;
        while(left<right){
            int sum=arr[left]+arr[right];
            if(sum==target){
                return true;
            }
            else if(sum<target) left++;
            else right--;
        }
                //return true;
         //   }
               // mp[arr[i]] = i;
               return false;
        }
       // return false;
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna