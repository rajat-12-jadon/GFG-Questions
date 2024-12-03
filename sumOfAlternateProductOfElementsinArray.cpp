class Solution {
  public:
    int altProduct(vector<int>& arr) {
        // Your code goes here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int ans = 0;
        int start = 0, last = n - 1;
        while(start <= last)
        {
            ans += (arr[start] * arr[last]);
            start++, last--;
        }
        return ans;
    }
};
