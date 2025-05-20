class Solution {
  public:
    int kthSmallest(int m, int n, int k) {
        // code here
        
        
        // for finding kth smallest element
        
        int low = 1;
        int high = m * n;

        while (low < high) 
        {
            int mid = low + (high - low) / 2;
            int count = 0;

            for (int i = 1; i <= m; i++) 
            {
                count += min(n, mid / i);
            }

            if (count < k) 
            {
                low = mid + 1;
            } 
            else 
            {
                high = mid;
            }
        }

        return low;
    }
};
