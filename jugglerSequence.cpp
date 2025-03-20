class Solution {
  public:
    vector<long long> jugglerSequence(long long n) {
        // code here
        vector<long long> result;
        result.push_back(n);

        while (n != 1) {
            if (n % 2 == 0)
                n = floor(sqrt(n));
            else
                n = floor(pow(n, 1.5));
            result.push_back(n); 
        }
        
        return result;
    }
};
