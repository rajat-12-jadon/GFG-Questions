class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;

        for (int i = 0; i < n; ++i) {
            // Add primary diagonal element
            sum += mat[i][i];
            // Add secondary diagonal element
            sum += mat[i][n - i - 1];
        }

        // If matrix size is odd, subtract the center element (added twice)
        if (n % 2 == 1) {
            sum -= mat[n / 2][n / 2];
        }

        return sum;
    }
};
