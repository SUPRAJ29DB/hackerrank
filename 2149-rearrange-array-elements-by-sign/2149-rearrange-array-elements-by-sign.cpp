class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int>ans(nums.size());
        int pos=0, neg=1;
        for(int i=0;i<nums.size();i++){
            if (nums[i]<0){
            ans[neg]=nums[i];
            neg+=2;
            }
            else{
                ans[pos]=nums[i];
                pos+=2;
            }


        }
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna