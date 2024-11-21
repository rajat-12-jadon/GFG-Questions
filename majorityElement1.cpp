class Solution {
  public:
    int majorityElement(vector<int>& nums) {

        // your code here
         int candidate = 0, count = 0;

    // Phase 1: Find the candidate
    for (int i = 0; i < nums.size(); i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        if (nums[i] == candidate) {
            count++;  // Increment the count if the current element matches the candidate
        } else {
            count--;  // Otherwise, decrement the count
        }
    }

    // Phase 2: Validate the candidate
    count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == candidate) {
            count++;  // Count occurrences of the candidate
        }
    }

    // Check if the candidate is actually the majority element
    if (count > nums.size() / 2) {
        return candidate;
    } else {
        return -1;  // Return -1 if no majority element exists
    }
    }
};
