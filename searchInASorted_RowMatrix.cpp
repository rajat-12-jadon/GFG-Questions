class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        // code here
    int n = mat.size(); // Number of rows
    int m = mat[0].size(); // Number of columns

    for (int i = 0; i < n; ++i) {
        // Perform binary search on the current row
        if (binary_search(mat[i].begin(), mat[i].end(), x)) {
            return true;
        }
    }
    return false;
    }
};
