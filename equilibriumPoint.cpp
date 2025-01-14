class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int total_sum = 0, leftSum = 0;
        
        int n = arr.size();
        
        for(int i = 0; i < n; i++)
        {
            total_sum += arr[i];
        }
        
        for(int i = 0; i < n; i++)
        {
            total_sum -= arr[i];
            if(leftSum == total_sum)
            {
                return i;
            }
            leftSum += arr[i];
        }
        return -1;
    }
};
