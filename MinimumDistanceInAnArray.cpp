class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {
        // code here
        int n = arr.size();
        int result1 = -1, result2 = -1;
        int minDist = INT_MAX;
        
        for (int i = 0; i < n; i++) 
        {
            if (arr[i] == x) 
            {
                result1 = i;
            }
            if (arr[i] == y) 
            {
                result2 = i;
            }
            if (result1 != -1 && result2 != -1) 
            {
                minDist = min(minDist, abs(result1 - result2));
            }
        }
        
        return (minDist == INT_MAX) ? -1 : minDist;
    }
};
