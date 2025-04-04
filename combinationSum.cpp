class Solution {
public:
    void subsum(vector<int>& arr, int index, int n, int sum, vector<int>& current, vector<vector<int>>& result) {
        if (sum == 0) 
        {
            result.push_back(current);
            return;
        }
        if (index == n || sum < 0)
            return;

        current.push_back(arr[index]);
        subsum(arr, index, n, sum - arr[index], current, result);
        current.pop_back();

        subsum(arr, index + 1, n, sum, current, result);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        subsum(candidates, 0, candidates.size(), target, current, result);
        return result;
    }
};
