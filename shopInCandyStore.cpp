class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int k)
    {
        // Write Your Code here
        sort(candies, candies + N);
        
        int min_amount = 0, max_amount = 0;
        int i = 0, j = N - 1;
        
        while(i <= j)
        {
            min_amount += candies[i];
            i++;
            j -= k;
        }
        
        i = N - 1, j = 0;
        
        while(i >= j)
        {
            max_amount += candies[i];
            i--;
            j += k;
        }
        
        return {min_amount, max_amount};
    }
};
