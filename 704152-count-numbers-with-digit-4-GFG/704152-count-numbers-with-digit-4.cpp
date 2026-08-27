class Solution {
  public:
    int countNumberswith4(int n) {
        // code here
        int count=0;
        for(int i=0;i<=n;i++){
            int x=i;
            while(x>0){
                if(x%10==4){
                    count++;
                    break;
                }
                x/=10;
            }
        }
        return count;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna