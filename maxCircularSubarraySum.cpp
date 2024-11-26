class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {

        // your code here
    int n = arr.size();
    
    // max subarray Sum
    
    int sum = 0;
    int max = INT_MIN;
    int ans = INT_MIN;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
        
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        if (sum > max)
        {
            max = sum;
        }
        if (max == 0)
        {
            max = ans;
        }
    }
    
    // min subarray sum

    sum = 0;
    int min = INT_MAX;
    ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < ans)
        {
            ans = arr[i];
        }
        
        sum += arr[i];
        if (sum > 0)
        {
            sum = 0;
        }
        if (sum < min)
        {
            min = sum;
        }
        if (min == 0)
        {
            min = ans;
        }
    }
    sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int result;
    
    // circular sum

    int circular_sum = sum - min;

    if(sum == min)
    {
        result = max;
    }
    else
    {
        if(max > circular_sum)
        {
            result = max;
        }
        else
        {
            result = circular_sum;
        }
    }
    return result;
    }
};
