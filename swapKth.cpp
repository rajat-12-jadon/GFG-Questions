class Solution {
  public:
    void swapKth(int k, vector<int> &arr) {
        // code here
        int n = arr.size();
        
        swap(arr[k - 1], arr[n - k]);
    }
};
