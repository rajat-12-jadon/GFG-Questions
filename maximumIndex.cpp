class Solution {
  public:
    // arr[]: input array
    // Function to find the maximum index difference.
    int maxIndexDiff(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        vector<int> leftMin(n), rightMax(n);
      
        
        leftMin[0] = arr[0];
        
        for(int i = 1; i < n; i++)
        {
            leftMin[i] = min(leftMin[i-1], arr[i]);
        }
        
        rightMax[n-1] = arr[n - 1];
        
        for(int i = n-2; i >= 0; i--)
        {
            rightMax[i] = max(arr[i], rightMax[i + 1]);
        }
        
        int i = 0, j = 0, maxDiff = 0;
        
        while(i < n && j < n)
        {
            if(leftMin[i] <= rightMax[j])
            {
                maxDiff = max(maxDiff, j - i);
                j++;
            }
            else
            {
                i++;
            }
        }
        return maxDiff;
    }
};
