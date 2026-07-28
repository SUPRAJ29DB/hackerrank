class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        
        // If the array has 1 or 0 elements, 0 jumps needed
        if (n <= 1) return 0;
        
        // If first element is 0, we can't move anywhere
        if (arr[0] == 0) return -1;
        
        int maxReach = arr[0]; // Stores the maximum index reachable
        int steps = arr[0];    // Stores the number of steps we can still take
        int jumps = 1;         // Stores the number of jumps taken
        
        for (int i = 1; i < n; i++) {
            // Check if we reached the last index
            if (i == n - 1) return jumps;
            
            // Update the maximum reachable index
            maxReach = max(maxReach, i + arr[i]);
            
            // Use a step to move to the current index
            steps--;
            
            // If no steps left
            if (steps == 0) {
                // Must jump to reach further
                jumps++;
                
                // If current index is equal to or beyond maxReach, 
                // we cannot reach the end
                if (i >= maxReach) return -1;
                
                // Re-initialize steps for the next jump segment
                steps = maxReach - i;
            }
        }
        
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna