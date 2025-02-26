class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxSum = 0, minSum = 0;
        int maxResult = 0;
        int minResult = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            maxSum = max(0, maxSum + nums[i]);
            minSum = min(0, minSum + nums[i]);

            maxResult = max(maxResult, maxSum);
            minResult = min(minResult, minSum);
        }
        return max(maxResult, abs(minResult));
    }
};
