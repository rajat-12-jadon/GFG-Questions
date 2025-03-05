class Solution {
public:
    long long coloredCells(int n) {
        long long sum = 0;
        int count = n;
        if(n == 1) return 1;
        while(count > 0)
        {
            sum += 2 * (2*count - 1);
            count--; 
        }

        sum -= 2*n - 1;

        return sum;
    }
};
