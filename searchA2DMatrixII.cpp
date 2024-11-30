class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int i = 0, j = n - 1;
        
        while (i < m && j >= 0) {
            if (matrix[i][j] == target) {
                return true;  // Target found
            } else if (matrix[i][j] > target) {
                j--;  // Move left if current element is greater than target
            } else {
                i++;  // Move down if current element is smaller than target
            }
        }
        
        return false; 
    }
};
