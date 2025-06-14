class Solution {
  public:
    int smallestDivisor(vector<int>& arr, int k) {
        // Code here
        int left = 1, right = *max_element(arr.begin(), arr.end());
        int smallDivisor = -1;
        
        while(left <= right)
        {
            int mid = left + (right - left)/2;
            int sum = 0;
            
            for(int i = 0; i < arr.size(); i++)
            {
                sum += (arr[i] + mid - 1) / mid;
            }
            
            if(sum <= k)
            {
                smallDivisor = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return smallDivisor;
    }
};
