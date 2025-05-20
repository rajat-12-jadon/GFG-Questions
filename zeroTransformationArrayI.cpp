class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> diff(n + 1, 0);

        for(int i = 0; i < queries.size(); i++)
        {
            int L = queries[i][0];
            int R = queries[i][1];
            diff[L] += 1;
            if(R + 1 < n)
            {
                diff[R + 1] -= 1;
            }
        }

        int sum = 0;

        for(int i = 1; i < n; i++)
        {
            diff[i] += diff[i - 1];
        }
        bool allZero = true;
        for (int i = 0; i < n; i++) 
        {
            if (nums[i] > diff[i]) 
            {
                return false;
            }
        }
        return true;
    }
};
