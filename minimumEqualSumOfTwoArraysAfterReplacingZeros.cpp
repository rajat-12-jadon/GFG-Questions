class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        int sum1, sum2 = 0;
        int zero1, zero2 = 0;

        for(int i = 0; i < nums1.size(); i++)
        {
            if(nums1[i] == 0)
            {
                zero1++;
            }
            else
            {
                sum1 += nums1[i];
            }
        }

        for(int i = 0; i < nums2.size(); i++)
        {
            if(nums2[i] == 0)
            {
                zero2++;
            }
            else
            {
                sum2 += nums2[i];
            }
        }

        if(zero1 == 0 && zero2 == 0)
        {
           return (sum1==sum2) ? sum1 : -1;
        }

        int minSum1, minSum2 = 0;

        minSum1 = sum1 + zero1*1;
        minSum2 = sum2 + zero2*1;

        if(minSum1 == minSum2)
        {
            return minSum1;
        }

        int diff = abs(minSum1 - minSum2);

        if(minSum1 < minSum2)
        {
            if(zero1 == 0)
            {
                return -1;
            }
            int maxIncrease = 9 * zero1;
            
            return (diff <= maxIncrease) ? minSum2 : -1;
        }
        else    
        {
            if(zero2 == 0) return -1;

            int maxIncrease = 9 * zero2;

            return (diff <= maxIncrease) ? minSum1 : -1;
        }
    }
};
