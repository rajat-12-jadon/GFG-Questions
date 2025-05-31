/*You are required to complete this method*/
class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        int totalSum = 0, currSum = 0;
        
        for(int i = 0; i < n; i++)
        {
            totalSum += arr[i];
            currSum = currSum + i * arr[i]; 
        }
        
        int maxSum = currSum;
        
        for(int k = 0; k < n; k++)
        {
            currSum = currSum + totalSum - n * arr[n-1-k];
            
            if(currSum > maxSum)
            {
                maxSum = currSum;
            }
        }
        return maxSum;
    }
};
