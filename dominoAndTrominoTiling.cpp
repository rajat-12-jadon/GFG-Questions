class Solution {
public:

    const int MOD = 1e9 + 7;
    int numTilings(int n) {
        if (n == 0) return 1;
        if (n == 1) return 1;
        if (n == 2) return 2;

        long long n0 = 1; 
        long long n1 = 1;
        long long n2 = 2;
        long long n3;

        for(int i = 3; i <= n; i++)
        {
            n3 = (2 * n2 % MOD + n0) % MOD;

            n0 = n1;
            n1 = n2;
            n2 = n3;
        }
        return n2;
    }
};
