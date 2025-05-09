class Solution {
  public:
    long long int PowMod(long long int x, long long int n, long long int M) {
        // Code here
        long long result = 1;
        x = x % M; 

        while (n > 0) 
        {
            if (n % 2 == 1) 
            {
                result = (result * x) % M;
            }
            x = (x * x) % M;
            n = n / 2;
        }
        return result;
    }
};
