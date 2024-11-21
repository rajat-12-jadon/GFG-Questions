class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
         int n = prices.size();
         if (n < 2) return 0; // No profit can be made if there are less than 2 days

         int max_profit = 0;

         for (int i = 1; i < n; i++) 
         {
        // If the price is higher than the previous day's price, add the profit
            if (prices[i] > prices[i - 1]) 
            {
            max_profit += prices[i] - prices[i - 1];
            }
         }

         return max_profit;
    }
};
