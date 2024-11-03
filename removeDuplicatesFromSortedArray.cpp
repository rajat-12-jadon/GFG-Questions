class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    unordered_set<int> seen;
    vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
        
        if (seen.find(nums[i]) == seen.end()) 
        {
            result.push_back(nums[i]);
            seen.insert(nums[i]);
        }
    }
    int n = result.size();
    return n; 
    }
};
