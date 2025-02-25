class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        const int MOD = 1e9 + 7;    
        int prefix_sum = 0;
        int odd_count = 0, even_count = 1;
        int count = 0;

        for (int i = 0; i < n; i++) 
        {
            prefix_sum += arr[i];

            if (prefix_sum % 2 == 0) 
            {
                count = (count + odd_count) % MOD;
                even_count = (even_count + 1) % MOD;
            } 
            else 
            {
                count = (count + even_count) % MOD;
                odd_count = (odd_count + 1) % MOD;
            }
        }
        return count;
    }
};
