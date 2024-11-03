class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum = 0;
        int count = 0;
        int result;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] % 3 == 0 && nums[i] % 2 == 0)
            {
                sum += nums[i];
                count++;
            }
        }
        if(count == 0)
            {
                return 0;
            }
            else
            result = sum / count;
        return result;
    }
};
