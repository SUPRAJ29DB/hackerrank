class Solution {
public:
    int maxSubarrSum(vector<int> &arr, int a, int b) {
        int n = arr.size();

        vector<long long> prefix(n + 1, 0);
        for (int i = 0; i < n; i++)
            prefix[i + 1] = prefix[i] + arr[i];

        deque<int> dq;
        long long ans = LLONG_MIN;

        for (int i = a; i <= n; i++) {

            // Add candidate prefix index
            while (!dq.empty() && prefix[dq.back()] >= prefix[i - a])
                dq.pop_back();

            dq.push_back(i - a);

            // Remove indices that make length > b
            while (!dq.empty() && dq.front() < i - b)
                dq.pop_front();

            ans = max(ans, prefix[i] - prefix[dq.front()]);
        }

        return (int)ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna