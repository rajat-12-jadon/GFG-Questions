class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int N = n * n;

        long long actualSum = (1LL * N * (N + 1))/2;
        long long actualSumSquare = (1LL * N * (N + 1) * (2 * N + 1)) / 6;

        long long matrixSum = 0, matrixSumSquare = 0;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int num = grid[i][j];
                matrixSum += num;
                matrixSumSquare += (1LL * num * num);
            }
        }

        long long sumDifference = actualSum -matrixSum; //(x - y)
        long long sumSquareDifference = actualSumSquare - matrixSumSquare; //(x^2 - y^2)

        long long sumXY = sumSquareDifference/sumDifference; //(x + y)

        int missingNumber = (sumDifference + sumXY)/2; //(x - y + x + y)/2 ==> (x)
        int repeatNumber = missingNumber - sumDifference; //(x - x + y) ==> y

        return {repeatNumber, missingNumber};
    }
};
