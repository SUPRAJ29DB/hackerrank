class Solution {
  public:

    void reverse(vector<int>& arr) {
        int low = 0;
        int high = arr.size() - 1;

        while(low < high) {
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;

            low++;
            high--;
        }
    }

    vector<int> leaders(vector<int>& arr) {

        vector<int> ans;

        int right = arr[arr.size() - 1];

        
        ans.push_back(right);

        for(int i = arr.size() - 2; i >= 0; i--) {

            if(arr[i] >= right) {
                ans.push_back(arr[i]);
                right = arr[i];
            }
        }


        reverse(ans);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna