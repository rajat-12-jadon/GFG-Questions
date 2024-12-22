class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        int n = mat.size();      // Number of rows
    if (n == 0) return false;
    int m = mat[0].size();   // Number of columns
    if (m == 0) return false;

    // Start from the top-right corner
    int row = 0, col = m - 1;

    while (row < n && col >= 0) {
        if (mat[row][col] == x) {
            return true; // Element found
        } else if (mat[row][col] > x) {
            col--; // Move left
        } else {
            row++; // Move down
        }
    }
    return false;
    }
};
