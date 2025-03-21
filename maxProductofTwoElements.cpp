class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int firstMax = 0, secondMax = 0;

        for (int i = 0; i < nums.size(); i++) 
        {
            if (nums[i] > firstMax) 
            {
                secondMax = firstMax;
                firstMax = nums[i];
            }
            else if (nums[i] > secondMax) 
            {
                secondMax = nums[i];
            }
        }
        return (firstMax - 1) * (secondMax - 1);
    }
};
