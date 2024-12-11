class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n1 = a.size();
        int n2 = b.size();
        
        int i = n1 - 1;
        int j = 0;
        
        while(i >= 0 && j < n2)
        {
            if(a[i] > b[j])
            {
                swap(a[i], b[j]);
            }
            i--;
            j++;
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
    }
};
