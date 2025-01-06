class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        if(n < 2)
        {
            return {};
        }
        
        sort(arr.begin(), arr.end());
        
       int left = 0, right = n - 1;
       int closestSum = INT_MAX;
       int maxAbsDiff = -1;
       vector<int> result;
       
       while(left < right)
       {
           int sum = arr[left] + arr[right];
           int diff = abs(target - sum);
           
           if(diff < abs(target - closestSum))
           {
               closestSum = sum;
               maxAbsDiff = arr[right] - arr[left];
               result = {arr[left], arr[right]};
           }
           else if(diff == abs(target - closestSum))
           {
               int currentAbsDiff = arr[right] - arr[left];
               if(currentAbsDiff > maxAbsDiff)
               {
                   maxAbsDiff = currentAbsDiff;
                   result = {arr[left], arr[right]};
               }
           }
           
           if(sum < target)
           {
               left++;
           }
           else
           {
               right--;
           }
       }
       return result;
    }
};
