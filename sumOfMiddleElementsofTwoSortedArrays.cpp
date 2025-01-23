class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        
        vector<int> merged(arr1.size() + arr2.size());
        
        merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), merged.begin());
        
        int n = merged.size();
        
        int mid = merged[n/2] + merged[n/2 - 1];
        
        return mid;
    }
};
