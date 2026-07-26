class Solution {
  public:
    void relativeSort(vector<int>& a1, vector<int>& a2) {
        unordered_map<int, int> freq;
        for (int num : a1) {
            freq[num]++;
        }

        int idx = 0;
        unordered_set<int> seen;

        // Place elements of a1 according to order in a2
        for (int num : a2) {
            if (seen.find(num) == seen.end() && freq.count(num)) {
                seen.insert(num);
                while (freq[num] > 0) {
                    a1[idx++] = num;
                    freq[num]--;
                }
                freq.erase(num);
            }
        }

        // Collect remaining elements not in a2
        vector<int> remaining;
        for (auto& entry : freq) {
            while (entry.second > 0) {
                remaining.push_back(entry.first);
                entry.second--;
            }
        }

        // Sort remaining elements in ascending order
        sort(remaining.begin(), remaining.end());

        // Append sorted remaining elements to a1
        for (int num : remaining) {
            a1[idx++] = num;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna