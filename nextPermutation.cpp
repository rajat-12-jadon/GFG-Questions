class Solution {
  public:
    void nextPermutation(vector<int>& nums) {
        // code here
    int n = nums.size();
    int pivotIndex = -1;

    for (int i = n - 2; i >= 0; --i) {
        if (nums[i] < nums[i + 1]) {
            pivotIndex = i;
            break;
        }
    }

    if (pivotIndex == -1) {
        reverse(nums.begin(), nums.end());
        return;
    }

    int smallestLargerIndex = -1;
    for (int i = n - 1; i > pivotIndex; --i) {
        if (nums[i] > nums[pivotIndex]) {
            smallestLargerIndex = i;
            break;
        }
    }

    swap(nums[pivotIndex], nums[smallestLargerIndex]);

    reverse(nums.begin() + pivotIndex + 1, nums.end());
    }
};
