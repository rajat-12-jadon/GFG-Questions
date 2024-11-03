class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        // code here
        long long min = INT_MAX;
        long long max = INT_MIN;
        long long min_value = 0;
        long long max_value = 0;
        int n = arr.size();
        
        //for minimum value
        
        for(int i = 0; i < n; i++)
        {
            if(arr[i] < min)
            {
                min = arr[i];
                min_value = min;
            }
        }
        
        // for maximum value
        
        
        for(int i = 0; i < n; i++)
        {
            if(arr[i] > max)
            {
                max = arr[i];
                max_value = max;
            }
        }
        
        return {min_value, max_value};
    }
};
