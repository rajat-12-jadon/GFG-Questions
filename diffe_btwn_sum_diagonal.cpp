class Solution {
  public:
    int diagonalSumDifference(int N, vector<vector<int>> Grid) {
        // code here
        int result, sum1 = 0, sum2= 0;
        for(int i = 0; i < Grid.size(); i++)
        {
            sum1 += Grid[i][i];
            sum2 += Grid[i][Grid.size() - i - 1];
        }
        result = abs(sum1 - sum2);
        return result;
    }
};
