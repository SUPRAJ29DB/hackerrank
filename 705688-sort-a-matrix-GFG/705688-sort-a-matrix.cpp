class Solution {
  public:

    void merge(vector<int>& a, int low, int mid, int high) {

        vector<int> temp;

        int i = low;
        int j = mid + 1;

        while(i <= mid && j <= high) {

            if(a[i] <= a[j]) {
                temp.push_back(a[i]);
                i++;
            }
            else {
                temp.push_back(a[j]);
                j++;
            }
        }

        while(i <= mid) {
            temp.push_back(a[i]);
            i++;
        }

        while(j <= high) {
            temp.push_back(a[j]);
            j++;
        }

        for(int k = 0; k < temp.size(); k++) {
            a[low + k] = temp[k];
        }
    }

    void mergeSort(vector<int>& a, int low, int high) {

        if(low >= high)
            return;

        int mid = low + (high - low) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);

        merge(a, low, mid, high);
    }

    vector<vector<int>> sortedMatrix(vector<vector<int>> mat) {

        int n = mat.size();

        vector<int> a;

        // Flatten matrix
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                a.push_back(mat[i][j]);
            }
        }

        // Merge sort
        mergeSort(a, 0, a.size() - 1);

        // Put back into matrix
        int k = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                mat[i][j] = a[k];
                k++;
            }
        }

        return mat;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna