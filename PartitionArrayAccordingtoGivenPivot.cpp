class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left, equal, right;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < pivot)
            {
                left.push_back(nums[i]);
            }
            else if(nums[i] == pivot)
            {
                equal.push_back(nums[i]);
            }
            else
            {
                right.push_back(nums[i]);
            }
        } 
        result.insert(result.end(), left.begin(), left.end());
        result.insert(result.end(), equal.begin(), equal.end());
        result.insert(result.end(), right.begin(), right.end());

        return result;
    }
};
