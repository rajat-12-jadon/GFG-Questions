class Solution {
public:
        int total = 0;

        void calculateXORSum(vector<int>& nums, int index, int currentXOR) 
        {
            if (index == nums.size()) 
            {
                total += currentXOR;
                return;
            }

            calculateXORSum(nums, index + 1, currentXOR ^ nums[index]);
            calculateXORSum(nums, index + 1, currentXOR);               
        }
    int subsetXORSum(vector<int>& nums) {
        calculateXORSum(nums, 0, 0);
        return total;
    }
};
