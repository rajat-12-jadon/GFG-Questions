class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int, int> prefix_sum;
        int currentSum= 0, maxLength = 0;
        
        for(int i = 0; i < arr.size(); i++)
        {
            currentSum += arr[i];
        
            if(currentSum == k)
            {
                maxLength = i + 1;
            }
            
            if(prefix_sum.find(currentSum - k) != prefix_sum.end())
            {
                maxLength = max(maxLength, i - prefix_sum[currentSum - k]);
            }
            
            if(prefix_sum.find(currentSum) == prefix_sum.end())
            {
                prefix_sum[currentSum] = i;
            }
        }
        return maxLength;
    }
};
