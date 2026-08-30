class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        int x=a;
        int y=b;
        int temp;
        while(y!=0){
            temp=y;
            y=x%y;
            x=temp;
        }
        return x;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna