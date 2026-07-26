class Solution {
public:
    void relativeSort(vector<int>& a1, vector<int>& a2) {

        unordered_map<int, int> freq;

        for (int num : a1)
            freq[num]++;

        int idx = 0;

        // Place elements according to a2
        for (int num : a2) {
            if (freq.count(num)) {
                while (freq[num]--) {
                    a1[idx++] = num;
                }
                freq.erase(num);
            }
        }

        // Remaining elements
        vector<int> rem;

        for (auto &it : freq) {
            while (it.second--) {
                rem.push_back(it.first);
            }
        }

        sort(rem.begin(), rem.end());

        for (int num : rem)
            a1[idx++] = num;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna