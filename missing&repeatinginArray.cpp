class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        long long actualSum = (1LL * n * (n + 1))/2;
        long long actualSquareSum = (1LL * n * (n + 1) * (2 * n + 1)) / 6;
        
        long long arrSum = 0, arrSumSquare = 0;
        
        for(int i = 0; i < n; i++)
        {
            arrSum += arr[i];
            
            arrSumSquare += (1LL * arr[i] * arr[i]);
        }
        
        long long sumDifference = actualSum - arrSum;
        long long sumSquareDifference = actualSquareSum - arrSumSquare;
        
        long long sumXY = sumSquareDifference / sumDifference;
        
        int missingNumber = (sumDifference + sumXY)/2;
        int repeatNumber = missingNumber - sumDifference;
        
        return {repeatNumber, missingNumber};
    }
};
