class Solution {
public:
    int thirdMax(vector<int>& nums) {
         unordered_set<int> s(nums.begin(), nums.end());
        if (s.size() < 3) 
        {
            return *max_element(s.begin(), s.end());
        }
        
        s.erase(max_element(s.begin(), s.end()));
        s.erase(max_element(s.begin(), s.end()));
        return *max_element(s.begin(), s.end());
    }
};
