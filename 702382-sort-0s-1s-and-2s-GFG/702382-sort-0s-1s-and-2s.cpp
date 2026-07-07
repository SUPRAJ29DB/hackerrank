class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int left=0,mid=0,right=arr.size()-1;
        while(mid<=right){
            if (arr[mid]==0){
                swap(arr[left],arr[mid]);
                left++;
                mid++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else{
                swap(arr[mid], arr[right]);
                right--;
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna