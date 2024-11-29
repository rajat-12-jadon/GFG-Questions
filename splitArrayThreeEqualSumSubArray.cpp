class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> result;
        int total_sum = 0;

        // Calculate total sum
        for (int i = 0; i < n; i++) 
        {
            total_sum += arr[i];
        }

        // If total_sum is not divisible by 3, it's impossible to split
        if (total_sum % 3 != 0) 
        {
            return {-1, -1};
        }

        int target = total_sum / 3;
        int currSum = 0;
        int parts = 0;

        // Traverse the array to find two indices
        for (int i = 0; i < n; i++) 
        {
            currSum += arr[i];

            if (currSum == target) 
            {
                currSum = 0;
                result.push_back(i); // Record the index
                parts++;
                
                // If we find 2 parts, return result
                if (parts == 2) 
                {
                    if (i < n - 1) 
                    { // Ensure there are remaining elements for the third part
                        return result;
                    }
                }
            }
        }

        // If we fail to find two valid split points
        return {-1, -1};
    }
};
