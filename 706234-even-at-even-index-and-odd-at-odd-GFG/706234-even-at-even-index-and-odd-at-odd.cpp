class Solution {
  public:
    vector<int> reArrange(vector<int>& arr) {

        int n = arr.size();
        int even = 0;
        int odd = 1;

        while(even < n && odd < n) {

            while(even < n && arr[even]%2==0) {
                even+=2;
            }

            while(odd<n && arr[odd]%2!=0) {
                odd += 2;
            }

            if(even<n && odd<n) {
                int temp =arr[even];
                arr[even] = arr[odd];
                arr[odd] = temp;

                even += 2;
                odd += 2;
            }
        }

        return arr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna