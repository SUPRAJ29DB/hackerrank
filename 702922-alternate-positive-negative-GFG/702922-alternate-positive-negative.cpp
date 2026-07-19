class Solution {
	public:
	void rearrange(vector<int> &arr) {
		int n = arr.size();
		
		vector<int> pos, neg;
		
		// Store positives and negatives separately
		for (int x : arr) {
			if (x >= 0)
				pos.push_back(x);
			else
				neg.push_back(x);
		}
		
		int i = 0, p = 0, q = 0;
		
		// Alternate positive and negative
		while (p < pos.size() && q < neg.size()) {
			arr[i++] = pos[p++];
			arr[i++] = neg[q++];
		}
		
		// Remaining positives
		while (p < pos.size()) {
			arr[i++] = pos[p++];
		}
		
		// Remaining negatives
		while (q < neg.size()) {
			arr[i++] = neg[q++];
		}
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna